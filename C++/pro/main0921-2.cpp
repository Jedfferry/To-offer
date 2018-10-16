#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int t;
	while(cin>>t)
	{
		for(int i=0;i<t;i++)
		{
			int n,m,k;
			cin>>n>>m>>k;
			int sum=0;
			int **a=new int *[n];
			for(int j=0;j<n;j++)
			{
				a[j]=new int [m];
			}
			for(int j=0;j<m;j++)
			{
				for(int k=0;k<n;k++)
				{
					cin>>a[j][k];
				}
			}
			int *yuangong=new int [n];
			for(int oi=0;oi<n;oi++)
			{
				yuangong[oi]=0;
			}
			for(int j=0;j<m;j++)
			{
				int *linshi=new int [n];
				for(int bb=0;bb<n;bb++)
				{
					linshi[bb]=0;//未分配工作 
				}
				for(int s=0;s<k;s++)
				{
					int max=0;
					int xiabiao=0;;
					for(int q=0;q<n;q++)
					{
						if(a[j][q]>max&&yuangong[j]==0&&linshi[q]==0)
						{
							max=a[j][q];xiabiao=q;
						}
					}//一趟遍历，找到第一个最大的 
					linshi[xiabiao]=1;
					sum+=a[j][xiabiao];
					yuangong[j]=1;
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
