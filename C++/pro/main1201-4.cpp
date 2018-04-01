#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int count=0;
int sum=20;

void Found(int **iArray,int num1,int num2,int high,int right) 
{
	if(iArray[high][right]==1)
	{
		return;
	}
	else if(high==num1 && right==num2)
	{
		count++;return;
	}
	//else if(iArray[high][right]==1)
	else// if(high<num1||right<num2)
	{
		Found(iArray,num1,num2,high+1,right);
		Found(iArray,num1,num2,high,right+1);
	}
}

int main(int argc, char** argv) {
	int n,m,k;
	while(cin>>n>>m>>k){
		int **num=new int *[n];
		for(int i=0;i<n;i++)
		{
			num[i]=new int[m] ;
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				num[j][k]=0;
			}
		}
		int num1,num2;
		for(int i=0;i<k;i++)
		{
			cin>>num1>>num2;
			num[num1][num2]=1;
		}
		Found(num,n,m,0,0);
		cout<<"×ÜÊý"<<count<<endl;
		
		
		
		
		for(int i=0;i<n;i++)
		{
			delete []num[i];
		}
		delete []num;
	}
	return 0;
}

