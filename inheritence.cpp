#include<iostream>
#include<string>
using namespace std;

//base class

class vehicle{
    public:
    string brand ="ford";
    
    void honk()
    {
        cout<<"toot toot"<<endl;
    }
};

//inherit class

class car:public vehicle
{
    public:
    string model="mustang";

};
int main()
{
    car mycar;
    mycar.honk();
    cout<<mycar.brand+""+mycar.model;

    return 0;
}