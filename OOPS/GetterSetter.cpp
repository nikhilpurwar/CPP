#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    string name;
    int rollNumber;
    int age;
    char grade;
    public:
    void set_name(string name)
    {
        this->name=name;
    }
    void set_rollNumber(int rollNumber)
    {
        this->rollNumber=rollNumber;
    }
    void set_age(int age)
    {
        this->age=age;
    }
    void set_grade(char grade)
    {
        this->grade=grade;
    }
    string get_name()
    {
        return name;
    }
    int get_rollNumber()
    {
        return rollNumber;
    }
   
    int get_age()
    {
        return age;
    }
    
    char get_grade()
    {
        return grade;
    }
};
int main()
{
    Student st1;
    st1.set_name("Nikhil");
    st1.set_rollNumber(9);
    st1.set_age(23);
    st1.set_grade('B');
    cout<<"NAME is "<<st1.get_name()<<endl;
    cout<<"ROLL NUMBER is "<<st1.get_rollNumber()<<endl;
    cout<<"AGE is "<<st1.get_age()<<endl;
    cout<<"GRADE is "<<st1.get_grade()<<endl;
    return 0;
}