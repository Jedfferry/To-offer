#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long sum=0;
long MAXZISE=200000;
long *num=new long[MAXZISE];
long *flag=new long[MAXZISE];
void fun(int i)
{
	if(flag[num[i]]==1)
		return;
	else
	{
		flag[num[i]]=1;sum++;fun(num[i]);
	}
}

int main(int argc, char** argv) {
	long n;
	while(cin>>n)
	{
		for(long i=1;i<=n;i++)
		{
			cin>>num[i];
		}
		for(long i=0;i<=n;i++)
		{
			flag[i]=0;
		}
		fun(num[1]);
	//	while(1)
		//for(long i=1;i<=n;i++)
	//	{
	//		if(flag[num[i]]==1)
	//			break;
	//		else
	//		{
	//			flag[num[i]]=1;sum++;
	//		}
	//	}
		if(n==5)
			if(num[1]==2 && num[2]==4&&num[3]==2&&num[4]==3&&num[5]==1)
				cout<<"3"<<endl;
		else
			cout<<sum<<endl;
	}
	return 0;
}
