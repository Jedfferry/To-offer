#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	int *sum=new int [500];
	sum[0]=2;
	for(int i=1;i<500;i++)
	{
		sum[i]=sum[i-1]+3;
	}
	while(cin>>num)
	{
		if(num<=0)
			return -1;
		else
		{
			int n=0;
			for(int i=0;i<num;i++)
			{
				n+=sum[i];
			}
			cout<<n<<endl;
		}
	}
	return 0;
}
