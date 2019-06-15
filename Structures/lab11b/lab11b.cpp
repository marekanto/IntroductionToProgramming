#include <iostream>
using namespace std;
struct car{
	char color[10],make[15];
	bool crashed;
	int horsePower,doors;
	float engineCapacityinLitres;
};
car input(car *carDealership,int& actualsize){

		actualsize++;
		cout<<endl<<"created car number"<<actualsize-1;
		{cout<<endl<<"Color:";
		cin>>carDealership[actualsize].color;
		cout<<endl<<"make:";
		cin>>carDealership[actualsize].make;
		cout<<endl<<"is it crashed(0/1):";
		cin>>carDealership[actualsize].crashed;
		cout<<endl<<"how many horsepower does it have:";
		cin>>carDealership[actualsize].horsePower;
		cout<<endl<<"how many doors:";
		cin>>carDealership[actualsize].doors;
		cout<<endl<<"how big is capacity of engine(in litres):";
		cin>>carDealership[actualsize].engineCapacityinLitres;
		return carDealership[actualsize];
		}

}
car update(car *carDealership,int &actualsize){
	int property=0;
	int i=0;
	cout<<endl<<"Enter the number of car to update the label: ( smaller then "<<actualsize<<" )";
	cin>>i;
	cout<<"1.color 2.make 3.crashed 4.horsePower 5.doors 6.engineCapacityinLitres";
	cin>>property;
	switch (property){
	case 1:
	cout<<endl<<"replacing"<<carDealership[i].color<<"with:"<<endl;
	cin>>carDealership[i].color;
	return carDealership[i];
	break;
	case 2:
	cout<<endl<<"replacing"<<carDealership[i].make<<"with:"<<endl;
	cin>>carDealership[i].make;
	return carDealership[i];
	break;
	case 3:
	cout<<endl<<"replacing"<<carDealership[i].crashed<<"with:"<<endl;
	cin>>carDealership[i].crashed;
	return carDealership[i];
	case 4:
	cout<<endl<<"replacing"<<carDealership[i].horsePower<<"with:"<<endl;
	cin>>carDealership[i].horsePower;
	return carDealership[i];
	case 5:
	cout<<endl<<"replacing"<<carDealership[i].doors<<"with:"<<endl;
	cin>>carDealership[i].doors;
	return carDealership[i];
	case 6:
	cout<<endl<<"replacing"<<carDealership[i].engineCapacityinLitres<<"with:"<<endl;
	cin>>carDealership[i].engineCapacityinLitres;
	return carDealership[i];
	default:
	return carDealership[i];
	break;
}	
}
void output(car *carDealership,int actualsize,int i){
	cout<<endl<<"Color: "<<carDealership[i].color;	
	cout<<endl<<"make: "<<carDealership[i].make;
	cout<<endl<<"crashed: "<<carDealership[i].crashed;
	cout<<endl<<"horsepower: "<<carDealership[i].horsePower;
	cout<<endl<<"doors: "<<carDealership[i].doors;
	cout<<endl<<"engineCapacityinLitres: "<<carDealership[i].engineCapacityinLitres;
		
		
}
int main()
{
	car carDealership[10] = {{"red","BMW",0,350,5,3.5},{"blue","Nissan",1,140,3,1.4},{"black","skoda",1,1400,5,4.5}};
	int actualsize=3;
	int outputting_element=0;
	input(carDealership,actualsize);
	update(carDealership,actualsize);
   	cout<<"index of element to output:"<<endl;
	   cin>>outputting_element;
	output(carDealership,actualsize,outputting_element);
	
	return 0;
}
