#include <iostream>
#include <string.h>
//字符的所有排列和所有组合 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Permutaton(char *pStr,char *pBegin)
{
	if(*pBegin=='\0')
	{
		printf("%s\n",pStr);
	}
	else
	{
		for(char *pCh=pBegin;*pCh!='\0';pCh++)
		{
			char temp=*pCh;
			*pCh=*pBegin;
			*pBegin=temp;
			
			Permutaton(pStr,pBegin+1);
			
			temp=*pCh;
			*pCh=*pBegin;
			*pBegin=temp;
		}
	 } 
}
void Permutaton(char *pStr)
{
	if(pStr=='\0')
		return ;
	Permutaton(pStr,pStr);
}

void Permutaton1(char *pStr)
{
	if(pStr=='\0')
		return ;
	int length=strlen(pStr);
	for(int i=0;i<length;i++)
	{
		for(int j=i;j>=0;j--)
		{
			for(int k=j;k<=i;k++)
			{
				cout<<pStr[k];
			}
			cout<<endl;
		}
	}
}
int main(int argc, char** argv) {
	char ch[]="abc";
	Permutaton1(ch);
	return 0;
}

