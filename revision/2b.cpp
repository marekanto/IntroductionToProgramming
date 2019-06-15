#include <iostream>

using namespace std;

int main()
{
    char c1=';',c2=':',c3='.';
    int numbers=0,letters=0;    
	while(c1!=c2||c2!=c3){
	  
	  c3=c2;
	  c2=c1;
	c1=NULL;
	  
	  cin>>c1;	
		if(('a'<=c1 && c1<='z')||('A'<=c1 && c1<='Z')){
			letters++;}
		else if('0'<=c1 && c1<='9'){
			numbers++;}
		else {cout<<"character is nor the letter neither number"<<endl;}
  
	}
	if(letters>numbers) {cout<<"there is more letters"<<endl;}
		else if (numbers>letters) {cout<<"there is more numbers"<<endl;}
			else {cout<<"you have input the same amount of numbers and letters"<<endl;}

return 0;
}