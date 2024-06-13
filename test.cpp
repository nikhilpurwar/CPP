#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
float add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    double a,b,c;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    return 0;
}