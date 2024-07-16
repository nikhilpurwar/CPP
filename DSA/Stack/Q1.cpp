
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> st;
    string s="Hello World from Mars";
    for(int i=0;i<s.size();i++)
    {
        string temp="";
        while(s[i] !=' '&& i<s.size())
        {
            temp+=s[i];
            i++;
        }
        st.push(temp);
    }
    while(!st.empty())
    {
        cout<<st.top()<< " ";
        st.pop();
    }
    return 0;
   
}