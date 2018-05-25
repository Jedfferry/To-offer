#include <iostream>
using namespace std;
//top k快排实现
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(int a[],int num)
{
	for(int i=0;i<num;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
}
int partition(int a[],int low,int high)
{
	int prio=a[low];
	while(low<high)
	{
		while(low<high && a[high]>=prio) --high;
		a[low]=a[high];
		while(low<high && a[low]<=prio) ++low;
		a[high]=a[low];
	} 
	a[low]=prio;
	return low;
}

void qsort(int arr[] , int low, int high){
    if (low < high){
        int pivot=partition(arr, low, high);        //将数组分为两部分
        qsort(arr, low, pivot-1);                   //递归排序左子数组
        qsort(arr, pivot+1, high);                  //递归排序右子数组
    }
}
void getTopK(int arr[] ,int num,int k){
	if(k<0)
		return ;
	int low=0,high=num-1;
	int index=partition(arr,low,high);
	
	while(index!=k-1){
		if(index>k-1)
		{
			high=index-1;
		}
		if(index<k-1){
			low=index+1;
		}
		index=partition(arr,low,high);
	}
}
int main(int argc, char** argv) {
	int a[]={1,3,6,4,9,8,7,4,5,11,23,6};
	display(a,12);
//	qsort(a,0,11);
//	display(a,12);
	getTopK(a,12,7);
	display(a,12);
	//display(a,12);
	return 0;
}
