#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long num;
	char ch[10]={'0','1','2','3','4','5','6','7','8','9'};
	string a;
	while(cin>>num)
	{
		int i=0;
		while(num!=0)
		{
			int n=num%10;
			strcat(a,ch[n]);
			num=num/10;
		}
		cout<<a<<endl;	
	}
	return 0;
}
