#include<iostream>

using namespace std;

struct applicant{
    char name[30];
    int credit_ratings[3];
};

void ShowStru(applicant app);

void ShowStruPtr(applicant*app);

int main(){
applicant app={"tools",{3,4,5}};
ShowStru(app);
ShowStruPtr(&app);
}


void ShowStru(applicant app){
   cout<<app.credit_ratings;
   cout<<app.name;
}

void ShowStruPtr(applicant*app){
   cout<<app->credit_ratings;
   cout<<app->name;
}
