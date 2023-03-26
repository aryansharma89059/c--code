#include<iostream>
using namespace std;

int main()
{
    //for outer loop 
    for(int i=0;i<=5;i++)
    {
        cout<<"outer:"<<i<<endl;          //runs 5 times
        
        //for inner loop

        for (int j=0;j<=10;j++)
        {
            cout<<"inner:"<<j<<endl;                  //runs 5*10 time

        }
    }
    return 0;
}