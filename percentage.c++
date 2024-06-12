#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"";
    cout<<"Enter the marks:";
    cout<<"MATHS = ";
    cin>>a;
    cout<<"Physics = ";
    cin>>b;
    cout<<"English = ";
    cin>>c;
    int p=(a+b+c)/3;
    cout<<"Percentage = "<<p<<"%\n";
    if(p<45)
    {
        cout<<"FAIL";
    }
    else
    {
        cout<<"PASS";
    }
    return 0;
}
