#include<bits/stdc++.h>
using namespace std;
void addValue(string str,string strin)
{
    string temp;
    int i=0;
    while(str[i] != '/0')
    {
        if(str[i]!=' ')
        {
            temp[i]=str[i];
        }
        else
        {
            temp.append(strin);
        }
        i++;
    }
    cout<<temp;
}
int main()
{
    // char arr[1000] ;
    string arr;
    string h;
    // cin.getline(arr,100);
    cin>>arr;
    cin>>h;
    addValue(arr,h);
    return 0;
}