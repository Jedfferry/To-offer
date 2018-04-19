#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin>>n)
	{
		int *num=new int [n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];sum+=num[i];
		}
	/*	for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(num[i]>num[j])
				{
					int temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
		}
		int ff=sum/2;
		int sum1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				sum1+=num[j];
				if(sum1==ff)
					break;
			}
		}
		*/
		cout<<sum/2<<" "<<sum/2+1<<endl;
	}
	return 0;
}
