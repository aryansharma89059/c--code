#include<iostream>
using namespace std;

class animal{
    public:
    void animalsound()
    {
    cout<<"the animal has a perticular sound";
    }
};
class pig:public animal{
    public:
    void animalsound()
    {
        cout<<"the pig says wee wee\n\n";
    }
};

class dog:public animal{
    public:
    void animalsound()
    {
        cout<<"the dog barks bow bow"<<endl;

    }
};
int main()
{
animal myanimal;
pig mypig;
dog mydog;

myanimal.animalsound();
mypig.animalsound();
mydog.animalsound();
return 0;
}