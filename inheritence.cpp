#include<iostream>
using namespace std;

//base class

class vehicle{
    public:
    string brand = "ford";
    void honk()
    {
        cout<<"toot , toot"<<endl;
    }

};

//inherited class

class car : public vehicle
{
    public:
    string model = "mustang";

};
int main()
{
    car mycar;
    mycar.honk();
    cout<<mycar.brand + " " + mycar.model;

    return 0;
}
