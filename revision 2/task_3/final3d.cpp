#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream myfile;
    myfile.open("numbers3d.txt",ios::in);
    float number;
    int i=0;
	float mean=0;
	float sum=0;
	float numbers[100];
	while(!myfile.eof()){
		myfile>>number;
		cout<<number<<endl;
		numbers[i]=number;
		sum+=number;
		i++;
	}
	for(int j=0;j<i;j++){
	cout<<numbers[j]<<",";}
	mean=sum/i;
	cout<<"count of numbers: "<<i<<endl;
	cout<<"sum "<<sum<<endl;
	cout<<"mean: "<<mean<<endl;
	
	myfile.close();
	return 0;       
}