#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long n;
	while(cin>>n)
	{
		int *num=new int [10];
		for(int i=0;i<10;i++)
		{
			num[i]=0;
		}
		do{
			int k=n%10;
			if(num[k]==0)
			{
				num[k]=1;
				cout<<k;
			}
			n=n/10;
		}while(n!=0);
		cout<<endl;
	}
	return 0;
}
