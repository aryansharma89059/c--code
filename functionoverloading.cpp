#include<iostream>
using namespace std;

int plusfuncInt(int x , int y)
{
    return x+y;
}
double plusFuncDouble( double x , double y)
{
    return x+y;

}
int main()
{
    int mynum1= plusfuncInt(10,20);
    double mynum2=  plusFuncDouble(2.3,1.3);

    cout<<"int :"<<mynum1<<endl;
    cout<<"double  :"<<mynum2<<endl;
    return 0;
}