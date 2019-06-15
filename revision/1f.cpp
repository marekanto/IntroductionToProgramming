#include <iostream>

using namespace std;

int main()
{
	char c;
    int numbers=0,letters=0;
	for(int i=0;i<4;i++){
	  cin>>c;
		if(('a'<=c && c<='z')||('A'<=c && c<='Z')){
			letters++;}
		else if('0'<=c && c<='9'){
			numbers++;}
		else {cout<<"character is nor the letter neither number"<<endl;}
  
	}
	if(letters>numbers) {cout<<"there is more letters"<<endl;}
		else if (numbers>letters) {cout<<"there is more numbers"<<endl;}
			else {cout<<"you have input the same amount of numbers and letters"<<endl;}

    return 0;       
}