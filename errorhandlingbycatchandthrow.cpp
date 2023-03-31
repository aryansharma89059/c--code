#include<iostream>
using namespace std;
int main()
{
    try{    
    int age=15;
    if(age>=18)
    {
        cout<<"you are eligible :";

    }
    else{
        throw 505;
    }
}

catch(int mynum)
{
    cout<<"access denied - you must be at least 18 years old:";
    cout<<"error number"<<mynum;
}
return 0;
}