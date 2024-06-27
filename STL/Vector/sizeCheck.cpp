#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,5} ;
    cout<<v1[0]<<endl;
    cout<<"size is "<<v1.size()<<endl;
    cout<<"capacity is "<<v1.capacity()<<endl;
    cout<<v1[7]<<endl;
    // cout<<v1.at(7);
    v1.push_back(6);
    cout<<"new size is "<<v1.size()<<endl;
    cout<<"newcapacity is "<<v1.capacity()<<endl;
    cout<<v1[7]<<endl;
    // cout<<v1.at(7);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.push_back(11);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    vector<int> :: iterator itr1;
    for(itr1=v1.begin();itr1!=v1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    return 0;
}