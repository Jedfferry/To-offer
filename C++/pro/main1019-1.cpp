#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(int a[],int num);
//直接插入排序 
void InsertSort(int a[],int num){
	int i,j,temp;
	for(i=2;i<num;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0&&a[j]>temp;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}
//折半插入排序
void BInserSort(int a[],int num)
{
	int i,j,temp,low,mid,high;
	for(i=2;i<num;i++){
		temp=a[i];           //哨兵 
		low=0;
		high=i-1;
		while(low<=high){
			mid=(low+high)/2;
			if(temp<a[mid])
				high=mid-1;        //前子表 
			else
				low=mid+1;         //后子表 
		} 
		for(j=i-1;j>=high+1;j--)
			a[j+1]=a[j];         //记录后移 
		a[high+1]=temp; 
	}
} 
//希尔排序 
void shellsort1(int a[], int n)  
{  
    int i, j, gap;  
  
    for (gap = n / 2; gap > 0; gap /= 2) //步长  
        for (i = 0; i < gap; i++)        //直接插入排序  
        {  
            for (j = i + gap; j < n; j += gap)   
                if (a[j] < a[j - gap])  
                {  
                    int temp = a[j];  
                    int k = j - gap;  
                    while (k >= 0 && a[k] > temp)  
                    {  
                        a[k + gap] = a[k];  
                        k -= gap;  
                    }  
                    a[k + gap] = temp;  
                }  
        }   
} 
//冒泡排序
void bubblesort(int a[],int num)
{
	for(int i=0;i<num;i++){
		for(int j=i;j<num;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		display(a,10);
	}
 } 
 //快速排序
void Qsort(int a[], int left, int right)
{
    if(left >= right)
    {
        return;
    }
    int low = left;
    int high = right;
    int privotKey = a[low];/*用字表的第一个记录作为枢轴*/
 
    while(low < high)
    {
        while(low < high && a[high] >= privotKey)
        {
            --high;
        }
 
        a[low] = a[high];/*将比第一个小的移到低端*/
 
        while(low < high && a[low] <= privotKey)
        {
            ++low;
        }
         
        a[high] = a[low];    
/*将比第一个大的移到高端*/
    }
    a[low] = privotKey;/*枢轴记录到位*/
    Qsort(a, low, privotKey-1);
    Qsort(a, privotKey+1, high);
}
//选择排序
void Select(int a[],int num)
{
	for(int i=0;i<num;i++)
	{
		k=i;
		for(int j=i+1;j<num;j++)
		{
			if(a[j]<a[i])
				k=j;
			if(k!=i)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
} 
void display(int a[],int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<a[i]<<"   ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	int a[]={49,38,65,97,13};
	cout<<"before:";
	display(a,5);
	bubblesort(a,5);
	cout<<"after:";
	display(a,5);
	return 0;
}
