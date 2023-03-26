#include<iostream>
#include<string>
using namespace std;
int main()
{
    string cars[5];

    cars[0]="audi";
    cars[1]="astin";
    cars[2]="toyota";
    cars[3]="tata";
    cars[4]="nissan";
    
    for(int i=0;i<5;i++)
    {
        cout<<cars[i]<<endl;
    }
    return 0;
}