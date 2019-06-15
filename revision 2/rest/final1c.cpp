#include <iostream>

using namespace std;
void delete_spaces(char string[]){
	int i=0,j=0;
	while(string[i]!='\0'){
		if(string[i]==' '){
			int k=i;
			while(string[k]==' '){
			k++;}
			i=k-1;
		  }	
		string[j]=string[i];
		i++;
		j++;
	}
}
int main()
{
    char string[100] = "i  Love    Music     And Oatflakes  ";
	delete_spaces(string);
	cout<<string;
    return 0;       
}