#include<iostream>
using namespace std;
 
 void myfunction(string country="norway"){
 cout<<country<<"\n";
 }
 int main()
 {
    myfunction("sweaden");
    myfunction("india");
    myfunction();
    myfunction("egypt");
    return 0;
 }