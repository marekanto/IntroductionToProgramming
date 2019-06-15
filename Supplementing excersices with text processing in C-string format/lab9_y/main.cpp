#include <iostream>

using namespace std;
void* Myrealloc(void* ptr, int size)
{
	void* ptrr=malloc(size);
	if (ptrr == 0){
		cout<<"Cannot complete the task";
	}
	memcpy(ptrr,ptr,size);
	free(ptr);
	return ptrr;
}
int main()
{
    char* ptr =(char*)malloc(10);
    ptr =(char*) Myrealloc(ptr,40)	
	free(ptr)
	return 0;       
}