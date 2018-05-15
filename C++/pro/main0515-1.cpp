#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	long num;
	while(cin>>num)
	{
		int nn=0;
		int sum=num;
		do{
			nn++;
			sum/=10;
		}while(sum!=0);
		char ch1[nn];
		int flag=0;
		do{
			char ch='0'+num%10;
			ch1[flag]=ch;flag++;
			num/=10;
		}while(num!=0);
		for(int j=0;j<nn;j++)
		{
			cout<<ch1[j];
		}
		cout<<endl;
	}
	return 0;
}
