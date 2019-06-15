#include <iostream>
using namespace std;

 void magic_trick(char te[],char xt[])
{
	int pos=0;
while(te[pos]!='\0')
{
	pos++;
}
	for (int j=0;xt[j]!='\0';j++,pos++)
	{
		te[pos]=xt[j];
		
	}

te[pos]='\0';
}


int main()
{
    int i=0;
	char txt1[100],txt2[100];
    cout<<"enter 1st text:"<<endl;
    cin.getline(txt1,100);
    cout<<"enter 2nd text:"<<endl;
	cin.getline(txt2,100);
    magic_trick(txt1,txt2);
		cout<<txt1;
		i++;
    return 0;       
}