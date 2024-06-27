#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    cin.getline(arr,100);
    // cout<<arr;
    int i=0;
    while(arr[i] != ' ')
    {
        cout<<arr[i];
        i++;
    }
    cout<<i;
    return 0;
}