#include <iostream>
using namespace std;
int SeperateWordsWithSpaces(char text[])
{
int pos=1;
while(text[pos])
{		
	if(((text[pos]>='A') && (text[pos]<='Z')) && text[pos-1]!=' ' )
		 {
			int end=0;
			while(text[end])
			{
			end++;
			}
				for(int i=end+1; i>pos; i--)
				{ 
				text[i]=text[i-1];
				}
				text[pos]=' '; 
				}
				pos++;
			}
			cout<<text;
		}
		
			

int main()
{
    char text[200];
	cout<<"enter the text"<<endl;
	cin.getline(text,200);
    SeperateWordsWithSpaces(text);

}