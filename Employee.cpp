#include<bits/stdc++.h>
using namespace std;
class Employee
{
    public:
    string name;
    double sallary;
    Employee(string name,double sallary)
    {
        cout<<name<<endl;
        cout<<sallary<<endl;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<sallary;
    }
};
int main()
{
    Employee emp("raj",50000.00);
    emp.name="Rajesh";
    emp.sallary=60000.00;
    emp.print();
    return 0;
}