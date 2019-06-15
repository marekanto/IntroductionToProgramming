#include <iostream>
using namespace std;

void bubble_sort(int Arr[],int n )
{
	int i,j,temp;
	 for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
    }
	
}

int main()
{
    int Arr[10]={1,8,9,10,5,4,3,6,7,2};
	cout<<"array before sorting"<<endl;
	for(int i=0;i<10;i++){cout<<Arr[i]<<endl;}
	bubble_sort(Arr,10);
		cout<<"array after sorting"<<endl;
    for(int i=0;i<10;i++){cout<<Arr[i]<<endl;}
return 0;       
}