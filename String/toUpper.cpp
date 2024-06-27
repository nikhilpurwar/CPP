#include<bits/stdc++.h>
using namespace std;
char charToUpper(char c)
{
    if(c>='A'&&c<='Z')
    {
        return c;
    }
    return c-32;
}
int main()
{
    char c;
    cin>>c;
    c=charToUpper(c);
    cout<<c;
    return 0;
}