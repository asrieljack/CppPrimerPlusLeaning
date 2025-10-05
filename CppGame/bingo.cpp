#include <iostream>
#include <vector>


using namespace std;

// --- 常量定义 ---
const int ROWS = 5;
const int COLS = 5;
const pair<int, int> FIXED_CELL = {3, 4}; // 固定打勾的格子 R4, C5 (0-indexed: 3, 4)

// --- 辅助函数 ---
//检查指定位置周围八个条件
int get_surrounding_8_count(const vector<vector<int>>& grid, int r, int c) {
    int count = 0;
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0) continue;
            int nr = r + dr, nc = c + dc;
            if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && grid[nr][nc] == 1) {
                count++;
            }
        }
    }
    return count;
}

struct BingoInfo {
    int count;
    bool is_row;
    bool is_col;
    bool is_diag;
};

BingoInfo get_bingo_info(const vector<vector<int>>& grid) {
    BingoInfo info = {0, false, false, false};
    
    // 检查行
    for (int r = 0; r < ROWS; r++) {
        int row_sum = 0;
        for (int c = 0; c < COLS; c++) {
            row_sum += grid[r][c];
        }
        if (row_sum == 5) {
            info.count++;
            info.is_row = true;
        }
    }
    
    // 检查列
    for (int c = 0; c < COLS; c++) {
        int col_sum = 0;
        for (int r = 0; r < ROWS; r++) {
            col_sum += grid[r][c];
        }
        if (col_sum == 5) {
            info.count++;
            info.is_col = true;
        }
    }
    
    // 检查对角线
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < 5; i++) {
        diag1 += grid[i][i];
        diag2 += grid[i][4-i];
    }
    if (diag1 == 5) {
        info.count++;
        info.is_diag = true;
    }
    if (diag2 == 5) {
        info.count++;
        info.is_diag = true;
    }
    
    return info;
}

void print_grid(const vector<vector<int>>& grid) {
    cout << "\n====================" << endl;
    for (int r = 0; r < ROWS; r++) {
        cout << "| ";
        for (int c = 0; c < COLS; c++) {
            cout << (grid[r][c] == 1 ? "X" : " ");
            if (c < COLS - 1) cout << " | ";
        }
        cout << " |" << endl;
    }
    cout << "====================" << endl;
}

// --- 核心验证函数 ---

bool is_valid(const vector<vector<int>>& grid) {
    // 1. 检查BINGO条件
    BingoInfo bingo = get_bingo_info(grid);
    if (bingo.count != 1) return false;

    // 2. 计算行和列的总和
    int total_checked = 0;
    vector<int> row_sums(ROWS, 0);
    vector<int> col_sums(COLS, 0);
    
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            total_checked += grid[r][c];
            row_sums[r] += grid[r][c];
            col_sums[c] += grid[r][c];
        }
    }

    // --- 第 1 行 ---
    if (grid[0][0] == 1) { /* R1C1: 自动满足 */ }
    if (grid[0][1] == 1 && total_checked > 12) return false;
    if (grid[0][2] == 1 && col_sums[1] >= col_sums[2]) return false;
    if (grid[0][3] == 1 && row_sums[0] >= col_sums[3]) return false;
    if (grid[0][4] == 1 && !bingo.is_col) return false;

    // --- 第 2 行 ---
    if (grid[1][0] == 1) {
        vector<int> neighbors = {grid[0][0], grid[0][1], grid[1][1], grid[2][1], grid[2][0]};
        int sum_neighbors = 0;
        for (int n : neighbors) sum_neighbors += n;
        if (sum_neighbors % 2 != 1) return false;
    }
    if (grid[1][1] == 1 && total_checked < 13) return false;
    if (grid[1][2] == 1) {
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (get_surrounding_8_count(grid, r, c) == 0) {
                    return false;
                }
            }
        }
    }
    if (grid[1][3] == 1) {
        int corners = grid[0][0] + grid[0][4] + grid[4][0] + grid[4][4];
        if (corners != 2) return false;
    }
    if (grid[1][4] == 1 && !bingo.is_row) return false;

    // --- 第 3 行 ---
    if (grid[2][0] == 1 && grid[2][2] != 1) return false;
    if (grid[2][1] == 1) {
        int top_left_3x3 = 0;
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                top_left_3x3 += grid[r][c];
            }
        }
        if (top_left_3x3 < 5) return false;
    }
    if (grid[2][2] == 1) {
        for (int r = 0; r < ROWS - 1; r++) {
            for (int c = 0; c < COLS; c++) {
                if (grid[r][c] == 1 && grid[r+1][c] == 1) {
                    return false;
                }
            }
        }
    }
    if (grid[2][3] == 1) {
        for (int r = 1; r < ROWS - 1; r++) {
            for (int c = 1; c < COLS - 1; c++) {
                if (grid[r][c] == 0) {
                    int cardinal = grid[r-1][c] + grid[r+1][c] + grid[r][c-1] + grid[r][c+1];
                    if (cardinal == 4) return false;
                }
            }
        }
    }
    if (grid[2][4] == 1 && !bingo.is_diag) return false;

    // --- 第 4 行 ---
    if (grid[3][0] == 1) {
        bool has_dense = false;
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (get_surrounding_8_count(grid, r, c) >= 7) {
                    has_dense = true;
                    break;
                }
            }
            if (has_dense) break;
        }
        if (!has_dense) return false;
    }
    if (grid[3][1] == 1 && row_sums[3] >= col_sums[1]) return false;
    if (grid[3][2] == 1) {
        bool has_2x2 = false;
        for (int r = 0; r < ROWS - 1; r++) {
            for (int c = 0; c < COLS - 1; c++) {
                if (grid[r][c] + grid[r+1][c] + grid[r][c+1] + grid[r+1][c+1] == 4) {
                    has_2x2 = true;
                    break;
                }
            }
            if (has_2x2) break;
        }
        if (!has_2x2) return false;
    }
    if (grid[3][3] == 1 && get_surrounding_8_count(grid, 3, 3) % 2 != 0) return false;

    // --- 第 5 行 ---
    if (grid[4][0] == 1 && col_sums[4] >= 3) return false;
    if (grid[4][1] == 1 && col_sums[1] <= 3) return false;
    if (grid[4][2] == 1 && col_sums[0] <= 3) return false;
    if (grid[4][3] == 1) {
        int min_col = col_sums[0];
        for (int i = 1; i < COLS; i++) {
            if (col_sums[i] < min_col) min_col = col_sums[i];
        }
        if (col_sums[2] != min_col) return false;
    }
    if (grid[4][4] == 1) {
        bool has_empty = false;
        for (int s : row_sums) if (s == 0) has_empty = true;
        for (int s : col_sums) if (s == 0) has_empty = true;
        if (!has_empty) return false;
    }

    return true;
}

// --- 主程序 ---

void solve_puzzle() {
    vector<pair<int, int>> variable_cells;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (r != FIXED_CELL.first || c != FIXED_CELL.second) {
                variable_cells.push_back({r, c});
            }
        }
    }

    long long num_combinations = 1LL << variable_cells.size(); // 2^24
    bool solution_found = false;
    int progress_interval = max(1LL, num_combinations / 1000); // 进度更新间隔

    cout << "开始检查 " << num_combinations << " 种可能性..." << endl;

    for (long long i = 0; i < num_combinations; i++) {
        // 显示进度
        if (i % progress_interval == 0) {
            double progress = (double)i / num_combinations * 100;
            cout << "\r进度: " << progress << "% (" << i << "/" << num_combinations << ")" << flush;
        }

        // 构建棋盘
        vector<vector<int>> grid(ROWS, vector<int>(COLS, 0));
        grid[FIXED_CELL.first][FIXED_CELL.second] = 1;

        long long temp_i = i;
        for (const auto& cell : variable_cells) {
            grid[cell.first][cell.second] = temp_i & 1;
            temp_i >>= 1;
        }

        // 验证
        if (is_valid(grid)) {
            cout << "\n\n找到了一个解！" << endl;
            print_grid(grid);
            solution_found = true;
            // 如果只想找一个解，可以取消下面的注释
            // break;
        }
    }

    if (!solution_found) {
        cout << "\n\n在遍历了所有 " << num_combinations << " 种可能性后，没有找到任何解。" << endl;
        cout << "此谜题无解。" << endl;
    }
}

int main() {
    solve_puzzle();
    return 0;
}