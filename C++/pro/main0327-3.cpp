#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int patition(int *a,int low,int high)
{
	int pro=a[low];
	while(low<high)
	{
		while(low<high && a[high]>=pro)--high;
		a[low]=a[high];
		while(low<high && a[low]<=pro)++low;
		a[high]=a[low];
	}
	a[low]=pro;
	return low;
}
void QSort(int *a,int low,int high)
{
	if(low<high)
	{
		int index=patition(a,low,high);
		QSort(a,index+1,high);
		QSort(a,low,index-1);
	}
}
void display(int *a,int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	int num[5]={5,4,2,1,3};
	display(num,5);
	QSort(num,0,4);
	display(num,5);
	return 0;
}
