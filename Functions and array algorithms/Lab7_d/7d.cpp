#include <iostream>

using namespace std;
	void select_sort( int arr[], int size )
{
    int k;
    for( int i = 0; i < size; i++ )
    {
        k = i;
        for( int j = i + 1; j < size; j++ )
        if( arr[ j ] < arr[ k ] )
             k = j;
        
        swap( arr[ k ], arr[ i ] );
    }
}

int main()
{
    int arr[10]={1,8,9,10,5,4,3,6,7,2};
	cout<<"array before sorting"<<endl<<;
	for(int i=0;i<10;i++){cout<<arr[i]<<endl;}
		select_sort(arr,10);
		cout<<"array after sorting"<<endl;
    for(int i=0;i<10;i++){cout<<arr[i]<<endl;}
    return 0;       
}