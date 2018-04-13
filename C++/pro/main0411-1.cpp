#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Merge(int source[],long start,long mid,long end,int *snum)
{
	long i=start,j=mid+1,k=start;
	while(i!=mid+1 && j!=end+1)
	{
		if(source[i]>=source[j])
		{
			snum++;
		}
	}
}
int main(int argc, char** argv) {
	int n;
	long k;
	cin>>n>>k;
	int *num=new int [k];
	int *flag=new int [k];
	for(long i=0;i<k;i++)
	{
		cin>>num[i];
		flag[i]=0;
	}
	
	int snum=0;
	for(long i=0;i<k;i++)
	{
		for(long j=i+1;j<k;j++)
		{
			if(num[i]<num[j] && flag[i]==0 && flag[j]==0)
			{
				flag[i]=flag[j]=1;
				snum++;
			}
		}
	}
	cout<<snum<<endl;
	return 0;
}
