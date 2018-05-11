#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long num;
	while(cin>>num)
	{
		while(num!=1)
		{
			for(int i=2;i<=num;i++)
			{
				if(num%i==0)
				{
					cout<<i<<" ";
					num/=i;
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
