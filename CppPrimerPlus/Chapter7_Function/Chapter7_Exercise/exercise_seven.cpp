#include<iostream>

struct applicant{
    char name[30];
    int credit_ratings[3];
};
void f1(applicant*a);
const char*f2(const applicant *a1,const applicant*a2); 

typedef void (*F1Ptr)(applicant *);
typedef const char*(*F2Ptr)(const applicant*,const applicant*);
int main(){
    F1Ptr p1=f1;
    F2Ptr p2=f2;
    F1Ptr ap[5];
    F2Ptr pa[10]={f2,f2,f2,f2,f2,f2,f2,f2,f2,f2};
}
void f1(applicant*a);
const char*f2(const applicant *a1,const applicant*a2); 