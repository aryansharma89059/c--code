#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //create and open file
    ofstream Myfile("filename.txt");

    //write the file

    Myfile<<"file cxan be tricky but ot has fun enough";

    //close file

    Myfile.close();
    return 0;
}
