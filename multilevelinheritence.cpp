#include<iostream>
using namespace std;

//parent class

class myclass{
    public:
    void myFunction()
    {
        cout<<"some content in parent class:";

    }

};

//child class

class mychild: public myclass
{

};

//grandchild class

class mygrandchild:public mychild
{

};
int main()
{
    mygrandchild myobj;
    myobj.myFunction();
    return 0;
}