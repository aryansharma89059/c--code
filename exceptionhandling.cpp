#include<iostream>
using namespace std;

int main()
{
    try{
        int age=15;
        if(age<18)
        {
            cout<<"you are not eligible";

        }
        else{
            throw(age);
            
        }
    }
    catch(int mynum)
    {
        cout<<"access denied";
        cout<<"age is:"<<mynum;
    }
    return 0;
}