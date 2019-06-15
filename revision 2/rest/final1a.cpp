#include <iostream>

using namespace std;
void delete_lowercase(char string[]){
	int i=0,j=0;
	char new_string[100];
	while(string[i]!='\0'){
		if(string[i]>='a' && string[i]<='z'){
			i++;
		}else{
		string[j]=string[i];
		i++;
		j++;
		}
	}
	string[j]='\0';
}

int main()
{
   	char stringone[] = "i Love Music And Oatflakes  ";
	delete_lowercase(stringone);
	cout<<stringone<<endl;   	
    return 0;       
}