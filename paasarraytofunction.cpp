#include<iostream>
using namespace std;

void myFunction (int myNumber[5])
{
    for(int i=0;i<5;i++)
    {
        cout<<myNumber[i]<<endl;

    }
}
int main()
{
    int myNumber[5]={10,20,30,40,50};
    myFunction(myNumber);
    return 0;
}