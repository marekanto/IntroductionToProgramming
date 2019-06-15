#include <iostream>
#include <string.h>
using namespace std;
int find(char a[],char x)
{
	int pos=0;
	while( a[pos]!=0 && a[pos]!=x)
		pos++;
	if(a[pos]==x)
		return pos;
	else
		return -1;
	
}

int main()
{
    int pos=0;
	char name[30];
	char x='d';
	cout<<"enter the text: ";
	cin.getline(name,30);
	cout<<find(name,x)+1;
	return 0;       

}

/*



char name[10]=kowalski
cin.getline(name1,
strcat(name1, "_*_");
strcat(name1, "Jan");
char* ptr=strchr(name1, '*');
if(ptr!=0)
{
	int position = ptr - name1; 
	cout<<"i found character";
}

int  pos_of_star=-1;
int pos=0;
whil( name1[pos]!=0 && name1[pos]!='*')
	pos++
	if(name1=='*')
	cout<<"character * found,position:"<<pos;
	 pos_of_star=pos;

*/