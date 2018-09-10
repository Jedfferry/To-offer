#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		int *a=new int [100];
		int k=0;
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				a[k]=i;
				k++;
			}
		}
		int sum=0;
		for(int i=0;i<k;i++)
		{
			sum+=a[i];
		}
		if(sum==num)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
