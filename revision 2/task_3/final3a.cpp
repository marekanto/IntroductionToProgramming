#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream myFile,saveFile;
	myFile.open("C:\\numbers.txt");
	int number;
	int sum=0;

	if(myFile.is_open()==1){
	cout<<"everything is okay! FIle has been loaded."<<endl;
	
	while( myFile>>number ){
		sum=sum+number;
	
	}
	}
	cout<<sum;
	saveFile.open("lol.txt",ios::out);
	saveFile<<sum;
	myFile.close();
    saveFile.close();
	return 0;       

}