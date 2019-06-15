#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myfile;
	int i=0;
	const int N=10;
	double array[N] = {1,2,3,4,5,6,7,8,9,10};
    myfile.open("array.txt",ios::out);
    while(i<N){
	myfile<<array[i];
	i++;
	}
	
	return 0;       
}