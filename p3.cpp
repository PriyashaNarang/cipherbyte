#include<iostream>
using namespace std;
class student
{
private:
    char snm[25],fnm[25],mnm[25],dob[10],bg[4],ct[20],st[30],loc[25],nt[20],cs[10],cnm[20];
    long long pno,fno;
    int yr,pin;
    float cgpa,per;
public:
    void personal_info_input();
    void address_input();
    void academics_info_input();
    void personal_info_output();
    void address_output();
    void academics_info_output();
};
void student::personal_info_input()
{
    cout<<"Enter student name:";
    cin>>snm;
    cout<<"Enter father's name:";
    cin>>fnm;
    cout<<"Enter mother's name:";
    cin>>mnm;
    cout<<"Enter date of birth(DD/MM/YYYY):";
    cin>>dob;
    cout<<"Enter mobile no.:";
    cin>>pno;
    cout<<"Enter father's mobile no.:";
    cin>>fno;
    cout<<"Enter blood group:";
    cin>>bg;
}
void student::address_input()
{
    cout<<"Enter locality:";
    cin>>loc;
    cout<<"Enter pin code:";
    cin>>pin;
    cout<<"Enter city:";
    cin>>ct;
    cout<<"Enter state:";
    cin>>st;
    cout<<"Enter nation:";
    cin>>nt;
}
void student::academics_info_input()
{
    cout<<"Enter college name:";
    cin>>cnm;
    cout<<"Enter course:";
    cin>>cs;
    cout<<"Enter year:";
    cin>>yr;
    cout<<"Enter CGPA:";
    cin>>cgpa;
    cout<<"Enter twelfth percentage:";
    cin>>per;
}
void student::personal_info_output()
{
    cout<<endl;
    cout<<"Personal info"<<endl;
    cout<<"Student name:"<<snm<<endl;
    cout<<"Father's name:"<<fnm<<endl;
    cout<<"Mother's name:"<<mnm<<endl;
    cout<<"Date of birth:"<<dob<<endl;
    cout<<"Mobile no.:"<<pno<<endl;
    cout<<"Father's mobile no.:"<<fno<<endl;
    cout<<"Blood group:"<<bg<<endl;
}
void student::address_output()
{
    cout<<endl;
    cout<<"Address info"<<endl;
    cout<<"Locality:"<<loc<<endl;
    cout<<"Pin code:"<<pin<<endl;
    cout<<"City:"<<ct<<endl;
    cout<<"State:"<<st<<endl;
    cout<<"Nation:"<<nt<<endl;
}
void student::academics_info_output()
{
    cout<<endl;
    cout<<"Academics info"<<endl;
    cout<<"College name:"<<cnm<<endl;
    cout<<"Course:"<<cs<<endl;
    cout<<"Year:"<<yr<<endl;
    cout<<"CGPA:"<<cgpa<<endl;
    cout<<"Twelfth percentage:"<<per<<endl;
}
int main()
{
    int n;
    cout<<"Enter no. of students:";
    cin>>n;
    student s1[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<"Student "<<i+1<<endl;
        s1[i].personal_info_input();
        s1[i].address_input();
        s1[i].academics_info_input();
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<endl;
        cout<<"Student "<<i+1<<endl;
        s1[i].personal_info_output();
        s1[i].address_output();
        s1[i].academics_info_output();
    }
    return 0;
}
