#include<iostream>
using namespace std;

int main()

{
    int n1=0,n2=1,n3=3,i,number;
    cout<<"enter the number of elements"<<endl;
    cin>>number;
    cout<<n1<<""<<n2<<""<<endl;
    for(int i=2;i<number;i++)
    {
        n3=n1+n2;
        cout<<n3<<""<<endl;
        n1=n2;
        n2=n3;
    }
    return 0;
}