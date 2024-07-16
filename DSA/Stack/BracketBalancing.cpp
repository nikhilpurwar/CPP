#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin>>s;
    if(s[0]==')' || s[0]=='}' || s[0]==']')
    {
        cout<<"Unbalanced";
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(st.top()=='(' && s[i]==')' && !st.empty())
        {
            st.pop();
        }
        else if(st.top()=='{' && s[i]=='}' && !st.empty())
        {
            st.pop();
        }
        else if(st.top()=='[' && s[i]==']' && !st.empty())
        {
            st.pop();
        }
        else{
            break;
        }
    }
    if(st.empty())
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Unbalanced";
    }
    return 0;
}