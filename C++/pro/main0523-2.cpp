#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch[100];
	while(gets(ch))
	{
		int sum=strlen(ch);
		for(int i=0;i<=sum/2;i++)
		{
			char p=ch[i];
			ch[i]=ch[sum-1-i];
			ch[sum-1-i]=p;
		}
		cout<<ch<<endl;
	}
	return 0;
}
