#include<iostream>
using namespace std;

void swapNums(int &x,int &y){
int z=x;
x=y;
y=z;
}
int main()
{
    
    
        int firstNum=100;
        int secondNum=200;

        cout<<"before swap:"<<endl<< firstNum << endl << secondNum <<endl;

        swapNums(firstNum,secondNum);

        cout<<"after swap:"<<endl<< firstNum <<endl << secondNum <<endl;

        return 0;

    
}