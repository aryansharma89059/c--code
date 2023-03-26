#include<iostream>
using namespace std;

class myclass{
    public:
    void myfunction()
    {
        cout<<"some content in parent class:";
    }
};

class myotherclass{
    public:
    void myotherfunction()
    {
        cout<<"some content in another class"<<endl;

    }
};

class mychildclass:public myclass,public myotherclass{

};
int main()
{
    mychildclass myobj;
    myobj.myfunction();
    myobj.myotherfunction();

    return 0;
}