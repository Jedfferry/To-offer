#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reOrderArray(int *array)
{
	int num=(sizeof(array)/sizeof(array[0]));
} 
void display(int *array)
{
	int num=(sizeof(array)/sizeof(array[0]));
	for(int i=0;i<num;i++)
	{
		cout<<array[i]<<"  ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	int a[]={1,5,4,2,6,3,7,8,9,1,0}; 
	display(a);
	return 0;
}
