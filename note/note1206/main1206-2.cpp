#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//求r[n]中第k小元素 
void display(int a[],int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<"  "<<a[i];
	}
	cout<<endl;
}
int count=0; 
int Partition(int r[],int low,int high)
{
	int i=low,j=high;
	while(i<j)
	{
		while(i<j&&r[i]<=r[j]) j--;
		if(i<j)
		{
			int temp=r[i];r[i]=r[j];r[j]=temp;//把较小记录变换到前面 
			i++;
		}
		cout<<count++<<endl;
		display(r,5);
		while(i<j&&r[i]<=r[j])  i++;
		if(i<j)
		{	
			int temp=r[i];r[i]=r[j];r[j]=temp;//把较大记录变换到前面 
			j--;
		}
	}
	return i;              //返回轴值记录的位置 
}
int SelectMinK(int r[],int low,int high,int k)
{
	int s;     //s为轴值位置
	s=Partition(r,low,high);
	cout<<"s="<<s<<endl; 
	if(s==k)                 //查找成功 
		return r[s];
	if(s>k)
		return SelectMinK(r,low,s-1,k);
	else
		return SelectMinK(r,s+1,high,k);
}

int main(int argc, char** argv) {
	int a[]={5,5,4,2,3};
	display(a,5);
	cout<<SelectMinK(a,0,4,3)<<endl;
	display(a,5);
	
	return 0;
}
