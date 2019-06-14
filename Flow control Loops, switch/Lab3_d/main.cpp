#include <iostream>

using namespace std;

int main()
{
    int height=0;
	cout<<"Please specify the height of the tree : ";
	cin>>height;
	cout<<endl<<endl;
	for(int i=1;i<=height;i++)
	{
		for(int j=height-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int n = 1;n<i*2;n++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int p=0;p<height-1;p++){cout<<" ";}
	cout<<"#"<<endl<<endl;
	return 0;
	    
}