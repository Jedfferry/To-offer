#include <iostream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num_all=0;
void num_check(int *a,int num)//判断是否含有重复的数字 
{
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
				num_all++;
				for(int k=i;k<num-1;k++)
				{
					a[k]=a[k+1];
				}	
				num--;
				break;
			}
		}
	}
}
int main(int argc, char** argv) {
	int num;
	cin>>num;
	int *a=new int[num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
	}
	num_check(a,num);
	for(int j=1;j<num-num_all+1;j++)
	{
		cout<<a[j]<<endl;
	}
	return 0;
}
