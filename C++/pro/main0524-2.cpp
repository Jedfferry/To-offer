#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void change(int *num,int sum,int flag)
{
	//先冒泡从小到大排 
	for(int i;i<sum;i++)
	{
		for(int j=i;j<sum;j++)
		{
			if(num[i]>num[j])
			{
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	if(flag==1)//降序
	{
		for(int i=0;i<sum/2;i++)
		{
			int temp=num[i];
			num[i]=num[sum-1-i];
			num[sum-1-i]=temp;
		}
	} 
}
int main(int argc, char** argv) {
	int n;
	while(cin>>n)
	{
		int *num=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		int flag;
		cin>>flag;
		change(num,n,flag);
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
