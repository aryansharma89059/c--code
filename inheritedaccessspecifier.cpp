#include<iostream>
using namespace std;

class Employee{
    protected:
    int salary;     //protected access specifier
};

//derived class

class programmer:public Employee
{
    public:
    int bonus;
    void setsalary(int s)
    {
    salary = s;
    }

int getsalary()
{
    return salary;
}
};
int main()
{
    programmer myobj;
    myobj.setsalary(30000);
    myobj.bonus=15000;
    cout<<myobj.getsalary()<<endl;
    cout<<myobj.bonus<<endl;
    return 0;
}