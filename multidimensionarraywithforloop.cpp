#include<iostream>
using namespace std;
int main()
{
    string letter [2][4]={
        {"a","b","c","d"},
        {"e","f","g","h"}
    };
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cout<<letter [i][j]<<endl;

        }
    }
    return 0;
}