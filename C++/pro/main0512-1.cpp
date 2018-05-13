#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		int n,m;
		cin>>n>>m;
		int *a=new int [m];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];a[i]=a[i]-1;
		}
		int *flag=new int [n];//标志位，1是还在，0是淘汰 
		int sum=n;
		for(int i=0;i<n;i++)
		{
			flag[i]=1;
		}
		int cal_start=0,a_start=0;
		while(sum!=1)
		{
			if(cal_start+a[a_start]>=n)
			{
				cal_start=cal_start+a[a_start]-n;
			}
			else 
		    	cal_start=cal_start+a[a_start];
			while(flag[cal_start]==0)//找到未淘汰的那一个 
			{
				if(cal_start==n-1)
					cal_start=0;
				else
					cal_start++;
			}
			flag[cal_start]=0;//淘汰
			
			sum--;
			if(sum==1)
				break;
			cal_start++;
			if(cal_start>=n)
				cal_start=cal_start-n;
			a_start++;
			if(a_start>=m)
				a_start=a_start-m;
		}
		if(cal_start>=n-1)
		{
			cal_start=cal_start-n;
		}
		cout<<cal_start+1<<endl;
	}
	return 0;
}
