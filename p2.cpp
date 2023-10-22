#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char ch;
    double n1,n2,res;
    int n3,n4;
    cout<<"A.Addition"<<endl;
    cout<<"B.Subtraction"<<endl;
    cout<<"C.Quotient"<<endl;
    cout<<"D.Multiplication"<<endl;
    cout<<"E.Remainder"<<endl;
    cout<<"F.Square root"<<endl;
    cout<<"G.Exponent"<<endl;
    cout<<"H.log"<<endl;
    cout<<"I.floor"<<endl;
    cout<<"J.ceil"<<endl;
    cout<<"Enter choice:"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 'A':
        {
            cout<<"Enter two no.'s:";
            cin>>n1>>n2;
            res=n1+n2;
            cout<<"Sum:"<<res;
            break;
        }
    case 'B':
        {
            cout<<"Enter two no.'s:";
            cin>>n1>>n2;
            res=n1-n2;
            cout<<"Difference:"<<res;
            break;
        }
    case 'C':
        {
            cout<<"Enter two no.'s:";
            cin>>n1>>n2;
            res=n1/n2;
            cout<<"Quotient:"<<res;
            break;
        }
    case 'D':
        {
            cout<<"Enter two no.'s:";
            cin>>n1>>n2;
            res=n1*n2;
            cout<<"Product:"<<res;
            break;
        }
    case 'E':
        {
            cout<<"Enter two no.'s:";
            cin>>n3>>n4;
            res=n3%n4;
            cout<<"Remainder:"<<res;
            break;
        }
    case 'F':
        {
            cout<<"Enter a no.:";
            cin>>n1;
            res=sqrt(n1);
            cout<<"Square root:"<<res;
            break;
        }
    case 'G':
        {
            cout<<"Enter a no.:";
            cin>>n1;
            cout<<"Enter power:";
            cin>>n2;
            res=pow(n1,n2);
            cout<<"Exponent:"<<res;
            break;
        }
    case 'H':
        {
            cout<<"Enter a no.:";
            cin>>n1;
            res=log(n1);
            cout<<"Log:"<<res;
            break;
        }
    case 'I':
        {
            cout<<"Enter a no.:";
            cin>>n1;
            res=floor(n1);
            cout<<"Lower round off:"<<res;
            break;
        }
    case 'J':
        {
            cout<<"Enter a no.:";
            cin>>n1;
            res=ceil(n1);
            cout<<"Upper round off:"<<res;
            break;
        }
    default:
        {
            cout<<"INVALID CHOICE";
            break;
        }
    }
    return 0;
}
