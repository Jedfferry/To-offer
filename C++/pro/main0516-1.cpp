#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch1[5000];
	while(gets(ch1))
	{
		char *p=ch1;
		int num=0;
		do{
			num++;
			*p++;
		}while(*p!='\0');
		char *ch2=new char[num];
		int ss=num;
		for(int i=0;i<ss;i++,num--)
		{
			ch2[i]=ch1[num-1];
		}
		for(int i=0;i<ss;i++)
		{
			cout<<ch2[i];
		}
		cout<<endl;
	}
	return 0;
}
