#include <iostream>
using namespace std;
void insertion_sort( int arr[], int size )
{
    int temp, j;
    
    for( int i = 1; i < size; i++ )
    {
        temp = arr[ i ];
        
        for( j = i - 1; j >= 0 && arr[ j ] > temp; j-- )
             arr[ j + 1 ] = arr[ j ];
        
        arr[j+1]=temp;
    }
}
int main()
{
	int arr[10]={1,8,9,10,5,4,3,6,7,2};
	cout<<"array before sorting"<<endl;
	for(int i=0;i<10;i++){cout<<arr[i]<<endl;}
	insertion_sort(arr,10);
		cout<<"array after sorting"<<endl;
    for(int i=0;i<10;i++){cout<<arr[i]<<endl;}
	return 0;
}