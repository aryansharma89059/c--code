#include<iostream>
using namespace std;
int main()
{
    string food="pizza";
    string*ptr=&food;
 
 //output value of food
 cout<<food<<endl;

 //output value of memory address
 cout<< &food<<endl;

 //output value of the pointer
 cout<<*ptr;

 *ptr="hamburger";

 //output value of the food
 cout<< food<<endl;

 //output value of the pointer
 cout<<*ptr<<endl;

return 0;



}