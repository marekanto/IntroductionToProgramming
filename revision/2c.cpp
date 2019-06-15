#include <iostream>

using namespace std;

int main()
{
    char c=';';
	int dletters=0,aletters=0;
	 while(dletters<2 || aletters<1)
	 {
			 	
		 cout<<"enter the character:"<<endl;
		 cin>>c;
		 if(c=='d')dletters++;
	 	 if(c=='a')aletters++;
	 }	   	  	 
	cout << "from charactersyou can create word dad!\n";
    return 0;       
}