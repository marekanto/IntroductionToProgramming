#include <iostream>
#include <string.h>
using namespace std;
void delete_first_minus(char string[]){
	int i=0;
	while(string[i]!='\0'){
		if(string[i]=='-'){
			strcpy( &string[i], &string[i+1] );
		}
		i++;   		
	}
	
}
int main()
{
    char string[] = "i Love Music A-nd Oatflakes  ";
    delete_first_minus(string);
    cout<<string;
	return 0;       
}