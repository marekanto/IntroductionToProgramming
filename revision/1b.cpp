#include <iostream>

using namespace std;

int main()
{
    cout<<"welcome to program revision 1b\n";
    double a,b,c,d,x,y,wynik;
    
    cout<<endl;
    cout<<"Enter the 4 numberrs:";
    cin>>a>>b>>c>>d;
    
    if( (a>b&&a>c)&&(b>c&&b>d)){x=a; y=b;}
    else if( (a>b&&a>d)&&(c>b&&c>d)) {x=a; y=c;}
	else if( (a>b&&a>c)&&(d>b&&d>c)) {x=a; y=d;}
	else if( (b>d&&b>a)&&(c>d&&c>a)) {x=b; y=c;}
	else if( (b>a&&b>c)&&(d>a&&d>c)) {x=b; y=d;}
	else if( (c>b&&c>a)&&(d>b&&d>a)) {x=c; y=d;}			
		cout<<"biggest numbers are:"<<x<<endl<<y<<endl;
	wynik=(x+y)/2.0;
	cout<<"arithmetic average: " <<wynik;

		return 0;       
}