#include <iostream>
#include <conio.h>

using namespace std;

/*
	1 - lowercase
	2 - capital letter
	3 - digit
	4 - ENTER
	5 - ESC
	6 - Left Arrow
	7 - Right Arrow
	8 - F1 function key
	9 - another key
*/
int classification(int i,int j)
{
	if(i>='a'&&i<='z')
	{
		return 1;
	}
	if(i>='A'&&i<='Z')
	{
		return 2;
	}
	if(i>='0'&&i<='9')
	{
		return 3;
	}
	if(i==13)//13 - ENTER
	{
		return 4;
	}
	if(i==27)//27 - ESC
	{
		return 5;
	}
	if(i==224)//224 - Function (special number)
	{
		if(j==75)//224 + 75 - Left Arrow
		{
			return 6;
		}
		if(j==77)//224 + 77 - Right Arrow
		{
			return 7;
		}
		
	}
	if(i==0)//0 another function key
	{
		if(j==59)
		{
			return 8;
		}
	}
}

int main()
{
	int c1=0,c2=0,result=0;
	
	cout<<"Welcome. Please press any key, and i'll output what kind of key you've pressed ;0"<<endl;
	c1=getch();
	cout<<c1<<" ";
	if(c1==224||c1==0)
	{
		c2=getch();
		cout<<c2<<endl;
		result=classification(c1,c2);
	}else
	{
		cout<<endl;
		result = classification(c1,0);
	}
	
	
	/*
	1 - lowercase letter
	2 - capital letter
	3 - digit
	4 - ENTER
	5 - ESC
	6 - Left Arrow
	7 - Right Arrow
	8 - F1 function key
	9 - another key
*/
	
	switch (result)
	{
		case 1 : cout<<"This is lowercase letter"<<endl;break;
		case 2 : cout<<"This is capital letter"<<endl;break;
		case 3 : cout<<"This is digit"<<endl;break;
		case 4 : cout<<"This is ENTER key"<<endl;break;
		case 5 : cout<<"This is ESC key"<<endl;break;
		case 6 : cout<<"This is Left Arrow key"<<endl;break;
		case 7 : cout<<"This is Right Arrow key"<<endl;break;
		case 8 : cout<<"This is F1 function key"<<endl;break;
		default : cout<<"This is unrecognized key (Another)"<<endl;break;
		
	}
	return 0;
}


