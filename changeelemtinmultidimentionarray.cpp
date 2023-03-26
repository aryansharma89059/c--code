#include<iostream>
using namespace std;
int main()
{
    string letter [2][4]=
     {
        {"A","B","C","D"},
         {"E","f","G","H"}
};
letter[0][0]="X";
cout<< letter [0][0]<<endl;
return 0;
}