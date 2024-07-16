#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int* arr;
    int top,n;
    Stack()
    {
        arr=new int[n];
        top=-1;
    }
    void PushNum(int num)
    {
        if(top<n-1)
        {
            top++;
            arr[top]=num;
        }
        else{
            cout<<"Stack Overflow!!!";
        }
    }
    void PopNum()
    {
        if(top>-1)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow!!!";
        }
    }
    int PeekStack()
    {
        if(top==-1)
        {
            cout<<"Empty";
        }
        return top;
    }
    void Display()
    {
        for(int i=0;i<=top+1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};


int main()
{
    int num;
    // cout<<"Enter size of Stack ";
    // cin>>n;
    Stack st;
    cout<<"Enter size of Stack ";
    cin>>st.n;

    cout<<"Enter number to push ";
    cin>>num;
    st.PushNum(num);
    st.PushNum(8);
    st.PushNum(9);
    st.PushNum(10);
    st.PopNum();
    st.Display();
    return 0;
}