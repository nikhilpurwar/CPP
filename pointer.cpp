#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var=5;
    cout<<var<<endl; //value of var
    cout<<&var<<endl; //address of var
    
    int *ptr=&var; 
    cout<<ptr<<endl; //address of var
    cout<<*ptr<<endl; //value of var where ptr is pointing at 
    
    int **ptr1=&ptr;
    cout<<&ptr<<endl;
    cout<<ptr1<<endl;
    // int a,b;
    // int *pa=&a;
    // int *pb=&b;
    // cin>>&a>>&b;
    // cout<<a+b;
}