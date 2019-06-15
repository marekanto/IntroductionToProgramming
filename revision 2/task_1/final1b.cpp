#include <iostream>

using namespace std;
int compare_letters(char string[]){
	int Lcounter=0,Ucounter=0;
	int result=NULL;
	for(int i=0;i<100;i++){
		if(string[i]<='z' && string[i]>='a'){
			Lcounter++;
		}else if(string[i]<='A' && string[i]<='Z'){
			Ucounter++;
		}
	}
if(Lcounter<Ucounter){
	result = 1;
	return result;
}else if(Ucounter<Lcounter){
	result = -1;
	return result;
}else if(Ucounter==Lcounter){
	result = 0;
	return result;
}

}
int main()
{
    char string[100] = "i Love Music And Oatflakes  ";
	int result = compare_letters(string);
    cout<<result;
	return 0;       
}