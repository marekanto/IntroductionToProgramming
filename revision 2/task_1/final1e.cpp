#include <iostream>

using namespace std;
void add_five_spaces(char string[]){
	int i=0;
	while(string[i]!='\0'){
	i++;
	}
	for(int k=i;k<i+5;k++){
		string[k]=' ';
	}
	
	
}
int main()
{
	char string[] = "i Love Music And Oatflakes";
	add_five_spaces(string);
    cout<<string<<"x";
	return 0;       
}