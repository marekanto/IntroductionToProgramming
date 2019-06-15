#include <iostream>
#include<string.h>
using namespace std;
void delete_comment(char string[]){
	char* ptr;
	ptr=strstr(string, "//");
	if(ptr!=NULL){
		*ptr=0;
	}
}
int main()
{
    char string[] = "i Love Music And Oatflakes//hehe";
	delete_comment(string);
    cout<<string;
	return 0;       
}