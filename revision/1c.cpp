#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
	if(a==b &&b==c&& c==d) cout<<"four";
    else if((b==a&&b==c)||(b==a&&b==d)||(b==c&&b==d)) cout<<"triplet";
	else if(((a==b)&&(c==d))||((a==c)&&(b==d))||((c==b)&&(a==d))) cout<<"there are two pairs";
	else if((a==b)||(a==c)||(a==d)||(b==c)||(b==d)||(c==d)) cout<<"pair";
	
		
	
		cout << "Hello world!\n";
    return 0;       
}