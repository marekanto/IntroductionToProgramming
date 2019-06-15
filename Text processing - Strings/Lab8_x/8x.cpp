#include <iostream>

using namespace std;
void singleSpaces(char *text,char *text1)
{
	int i=0,j=0,;
 	while(text[i])
	 {	 
	 	 
	 	 
	 	 if(text[i]==' ' && text[i]!=text[i+1])
		  {
		  	text1[j++]=text[i++];
		  }
		  else if(text[i]==' ' && text[i]==text[i+1])
		  {
		  	i++;
		  }
		  else
		  {
		  	text1[j++]=text[i++];
		  }
		 	
		 
		
	 }
	 text1[j]='\0';
	}
	

int main()
{
    char text[100],text1[100];
	cout << "Enter text!\n";
    cin.getline(text,100);
    cout<<"removing all multiple spaces"<<endl;
	singleSpaces(text,text1);
	cout<<text1;
	return 0;       
}