#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int N=100000;
int Fib[N];
int main(int argc, char** argv) {
	Fib[0]=1;
	Fib[1]=1;
	for(int i=2;i<N;i++)
	{
		Fib[i]=Fib[i-1]+Fib[i-2];
	}
	int n;
	while(cin>>n)
	{	int i=0;
		for(;i<N-1;i++)
		{
			if(Fib[i]<=n&&Fib[i+1]>=n)
				break;
		}
		int min=(n-Fib[i]<Fib[i+1]-n)?n-Fib[i]:Fib[i+1]-n;
		cout<<min<<endl;
	};
	return 0;
}
