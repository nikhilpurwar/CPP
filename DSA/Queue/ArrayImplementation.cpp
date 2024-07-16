#include<bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    int* arr;
    int n,rear,front;
    Queue()
    {
        arr=new int[n];
        rear =front=-1;
    }
    void PushNum(int num)
    {
        if(front==-1)
        {
            front++;
        }
        rear++;
        arr[rear]=num;
        if(rear==n-1)
        {
            cout<<"over flow";
            return;
        }
    }
    void PopNum(int num)
    {
        if(front == -1 && front>rear)
        {
            cout<<"Under Flow";
            return;
        }
        front++;

    }
    void Display()
    {
        for(int i=0;i<=rear+1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Queue Q;
    Q.PushNum(num);
    Q.PushNum(8);
    Q.PushNum(9);
    Q.PushNum(10);
    Q.PopNum();
    Q.Display();
    return 0;
}