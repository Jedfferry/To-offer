#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		int sum=1;
		while(num&(num-1)==0)
		{
			sum++;
			num>>=1;
		}
		cout<<sum<<endl;
	}
	return 0;
}
