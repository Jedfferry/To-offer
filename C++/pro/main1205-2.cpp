#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int count_t=0;
int count_a=0; 
void count_total(int **num,int i,int j,int l,int r)
{
	if(l==i&&r==j)
	{
		count_t++;
	}else if(l==i)
	{
		count_total(num,i,j,l,r+1);
	}else if(r==j)
	{
		count_total(num,i,j,l+1,r);
	}else{
		count_total(num,i,j,l+1,r);
		count_total(num,i,j,l,r+1);
	}
	//return count_t;
}
void count_avg(int **num,int i,int j,int l,int r)
{
	if(l==i&&r==j)
	{
		count_t++;
	}
	if(num[l][r]==1)
	{
		return ;
	}else if(l==i&&r==j)
	{
		count_a++;
	}else if(l==i)
	{
		count_avg(num,i,j,l,r+1);
	}else if(r==j)
	{
		count_avg(num,i,j,l+1,r);
	}else{
		count_avg(num,i,j,l+1,r);
		count_avg(num,i,j,l,r+1);
	}
	//return count_a;
}
int main(int argc, char** argv) {
	int n,m,k;
	cin>>n>>m>>k;
	int **num=new int *[n];
	for(int i=0;i<=n;i++)
	{
		num[i]=new int[m+1];
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			num[i][j]=0;
		}
	}
	int num1,num2;
	for(int i=0;i<k;i++)
	{
		cin>>num1>>num2;
		num[num1][num2]=1;
	}
	//count_total(num,n,m,0,0);
	count_avg(num,n,m,0,0);
	double pp=(double)count_a/(double)count_t;
	cout<<"total:"<<count_t<<endl;
	cout<<"count_a:"<<count_a<<endl;
	cout<<"pp:"<<pp<<endl;
	return 0;
}
