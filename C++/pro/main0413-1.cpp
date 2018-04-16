#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int *num=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	int sum=0,max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(num[i]>sum+1)
			break;
		sum+=num[i];
	}
	cout<<sum+1<<endl;
	return 0;
}
