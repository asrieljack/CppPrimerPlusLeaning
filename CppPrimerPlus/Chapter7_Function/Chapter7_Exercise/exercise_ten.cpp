#include<iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void DisplayBox(box box1);
void SetBoxVolume(box*box1);
int main(){
box box1={"doc",3,4,5,0};
DisplayBox(box1);
SetBoxVolume(&box1);
DisplayBox(box1);

}
void DisplayBox(box box1){
    cout<<box1.maker<<","<<box1.height<<","<<box1.width<<","<<box1.length<<","<<box1.volume<<endl;
}
void SetBoxVolume(box*box1){
    box1->volume=box1->height*box1->width*box1->length;
}