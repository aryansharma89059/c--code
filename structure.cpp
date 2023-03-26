#include<iostream>
using namespace std;
int main()
{
    struct{
        int myNum;
        string myString;
    
    } myStructure;
    myStructure.myNum=1;
    myStructure.myString="hello";

    cout<<myStructure.myNum<<endl;
    cout<<myStructure.myString<<endl;
     return 0;
}