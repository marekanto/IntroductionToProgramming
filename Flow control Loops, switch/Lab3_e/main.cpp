#include <iostream>

using namespace std;

int main()
{
	cout<<"Please start writing numbers. "<<endl;
    int negativeCounter=0,sum=0,previous=0,now=0;
	while(true)
	{
		cin>>now;
		if(now==previous)
		{
			cout<<"You have wrote the same number 2 times in a row"<<endl;
			break;
		}
		if(now<0)
		{
			negativeCounter++;
		}
		sum+=now;
		previous=now;
		if(negativeCounter>10)
		{
			cout<<"The number of reported negative numbers exceed 10 !!!"<<endl;
			break;
		}
		if(sum>100)
		{
			cout<<"The sum of these numbers exceeds 100!!"<<endl;
			break;
		}
	}      
	return 0;
}