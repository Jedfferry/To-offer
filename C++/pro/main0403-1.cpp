#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,k;
	cin>>n>>k;
	int *num=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int kk[n-k],sk=0;
	for(int i=0;i<n-k+1;i++)
	{
		int max=num[i],min=num[i],s_sum=0;
		for(int j=i;j<i+k;j++)
		{
			if(num[j]>max)
				max=num[j];
			if(num[j]<min)
				min=num[j];
		}
		s_sum=max-min;
		kk[sk++]=s_sum;
		//cout<<s_sum<<" ";
	}
	for(int i=0;i<sk;i++)
	{
		cout<<kk[i]<<" ";
	}
	return 0;
}
