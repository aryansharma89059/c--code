#include<iostream>
using namespace std;
int main()
{
    struct{
        string brand;
        int year;
        string model;
    } myCar1,myCar2;

    myCar1.brand="BMW";
    myCar1.year=2002;
    myCar1.model="X4";


    myCar2.brand="audi";
    myCar2.year=2000;
    myCar2.model="A3";

    cout<<"the first model of cars is"<<myCar1.brand<<"\n\n"<<myCar1.model<<"\n\n"<<myCar1.year<<"\n\n"<<endl;
    cout<<"the second model of cars is"<<myCar2.brand<<"\n\n"<<myCar2.model<<"\n\n"<<myCar2.year<<"\n\n"<<endl;
return 0;
}