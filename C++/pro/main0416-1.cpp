#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch1[100];
	while(gets(ch1))
	{
		char *p=ch1;
		int sum=0;
		int flag=0; 
		do{
			if(*p=='0'&&flag==0)
			{
				flag=1;
				*p++;*p++;
			}
			if('0'<=*p&&*p<='9')
			{
				if(sum!=0)
				{
					sum=sum*16;
				}
				sum+=(int)(*p-'0');
			}
			else if('a'<=*p &&*p<='z')
			{
				if(sum!=0)
				{
					sum=sum*16;
				}
				sum+=(int)(*p-'a'+10);
			}
			else if('A'<=*p &&*p<='Z')
			{
				if(sum!=0)
				{
					sum=sum*16;
				}
				sum+=(int)(*p-'A'+10);
			}
		}while(*p++!='\0');
		cout<<sum<<endl;
	};
	return 0;
}
