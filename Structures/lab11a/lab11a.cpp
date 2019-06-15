#include <iostream>

using namespace std;
struct StatResults {
       double avg, min, max;
   };

StatResults calculateStats(double array[],int array_size)
{	
	int sum = 0;
   StatResults temporary_instance;
   temporary_instance.min=array[0];
   temporary_instance.max=array[0];
   	for(int i=0;i<array_size;i++){
		if(array[i]>temporary_instance.max){
			temporary_instance.max=array[i];
		}
		if (array[i]<temporary_instance.min)
		{
			temporary_instance.min=array[i];
		}
		sum+= array[i];
	}
	temporary_instance.avg=sum/array_size;
	return temporary_instance;
}


int main()
{
    cout << "Hello world!\n";
  	int size = 5;
   double array[size]={5.5,10.3,15.3,20.99,25.11};
   
   StatResults result = calculateStats(array,size);
   	cout<<"average: "<<result.avg<<endl;
   	cout<<"minimum value: "<<result.min<<endl;
   	cout<<"maximum value: "<<result.max<<endl;
   	
	return 0;       
}
