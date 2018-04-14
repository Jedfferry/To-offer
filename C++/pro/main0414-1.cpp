#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int *zhang=new int [n];
	int *ren=new int [m];
	int *jin=new int [m];
	for(int i=0;i<n;i++)
	{
		cin>>zhang[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>ren[i]>>jin[i];
	}
	for(int i=0;i<m;i++)//排序所来得顾客 
	{
		for(int j=i+1;j<m;j++)
		{
			if(jin[i]>jin[j])
			{
				int temp=jin[i];
				jin[i]=jin[j];
				jin[j]=temp;
				
				temp=ren[i];
				ren[i]=ren[j];
				ren[j]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(zhang[i]>zhang[j])
			{
				int temp=zhang[i];
				zhang[i]=zhang[j];
				zhang[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<zhang[i]<<endl;
	}
	for(int i=0;i<m;i++)
	{
		cout<<ren[i]<<jin[i]<<endl;
	}
	
	int *flag=new int [n];
	for(int i=0;i<n;i++)
	{
		flag[i]=0;
	}
	int *flag_j=new int [m];
	for(int i=0;i<m;i++)
	{
		flag_j[i]=0;
	}
	int jnum=m-1,sum=0;
	while(jnum>=0)
	{
		for(int i=0;i<n;i++)
		{
			if((zhang[i]>=ren[jnum]) && (flag[i]==0) && (flag_j[jnum]==0))
			{
				flag[i]=1;flag_j[jnum]=1;
				sum+=jin[jnum];
			}
		}
		jnum--;
	}
	cout<<sum<<endl;
	return 0;
}
