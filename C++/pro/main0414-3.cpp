#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch1[100],ch2[100];
	while(gets(ch1))
	{
		gets(ch2);
		char *p1=ch1,*p2=ch2;int num1=0,num2=0;
		while(*p1!='\0')
		{
			num1++;
			cout<<*p1;
			if(num1%8==0)
			{
				cout<<endl;
				num1=0;
			}
			
			*p1++;
		}
		int avg1=8-num1;
		if(avg1!=0)
		{
			for(int i=0;i<avg1;i++)
			{
				cout<<"0";
			}
			cout<<endl;
		}

		while(*p2!='\0'){
			num2++;
			cout<<*p2;
			if(num2%8==0)
			{
				cout<<endl;
				num2=0;
			}
			
			*p2++;
		}
		int avg2=8-num2;
		if(avg2!=0)
		{
			for(int i=0;i<avg2;i++)
			{
				cout<<"0";
			}
			cout<<endl;
		}
	}
	return 0;
}
