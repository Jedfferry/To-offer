#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1,num2;
	while(cin>>num1>>num2)
	{
		int s1=num1,s2=num2;
		int r;
		if(num1>num2)
			r=num1%num2;
		else
			r=num2%num1;
		while(r!=0)
		{
			num1=num2;
			num2=r;
			r=num1%num2; 
		}
		cout<<(s1/num2)*(s2/num2)*num2<<endl;
	}
	return 0;
}
