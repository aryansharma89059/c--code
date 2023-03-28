#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream mywritefile("filename.txt");
    mywritefile<<"files can be accessed";

    mywritefile.close();

    string mytext;

    ifstream myreadfile("myreadfile.txt");

    while(  getline (myreadfile , mytext) )
    {
        cout << myreadfile;

    }
    myreadfile.close();


}