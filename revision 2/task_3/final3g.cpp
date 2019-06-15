#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("del.txt");
    myfile.close();
    remove("del.txt");
	cout << "Hello world!\n";
    return 0;       
}