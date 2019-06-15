#include <iostream>
#include <fstream>
 #include <stdio.h>
using namespace std;

int main()
{
    fstream files; 
	ofstream file1;
    int x;
	int sum=0;
	int numbers;
	int i=2;
	files.open("D:\\introduction to programming\\example_files\\numbers.txt");
    file1.open("result3b.txt");
	if(!files.is_open() || !file1.is_open()){
		cout<<"error";
	}else{	
		while(files>>x){
		cout<<x<<endl;
		sum=sum+x;	 			 	
		;			 		
		}
			
		}
	cout <<sum;
    files.close();
    file1.close();
	return 0;       
}//getline