#include <iostream>
#include <string.h>
using namespace std;
int has_extension(char string[]){
	int size = strlen(string);
	if(size<4){
		return 0;
	}
	if(strcmp(string+size-4, ".txt")==0){
		return 1;
	}else{
		return 0;
	}
	
}
int main()
{
    char string[] = "i Love Music And Oatflakes.txt";
	cout<<has_extension(string);   
	return 0;
}