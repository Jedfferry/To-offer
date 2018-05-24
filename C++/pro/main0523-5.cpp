#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int flag[256];
	for(int i=0;i<256;i++)
	{
		flag[i]=0;
	}
	char ch[500];
	while(gets(ch))
	{
		int sum=strlen(ch);
		for(int i=0;i<sum;i++)
		{
			flag[ch[i]]++;
		}
		//ÓÃÃ°ÅÝ 
		//int max=flag[0];
	/*	for(int i=0;i<256;i++)
		{
			for(int j=i;j<256;j++)
			{
				if(max<flag[j])
				{
					max=flag[j];
				}
			}
		}
		for(int i=0;i<256&&flag[i]!=0;i++)
		{
			char *p;
			itoa(i,p,10);
			printf("%c",p);
		}
		cout<<endl;*/
		int max;
		do{
			max=flag[0];
			for(int i=0;i<256;i++)
			{
				if(max<flag[i])
				{
					max=i;
				}
			}
			if(max!=0)
			{
				printf("%c",max);
				flag[max]=0;
			}
		}while(max!=0);
		cout<<endl;
	}
	return 0;
}
