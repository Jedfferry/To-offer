#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mystrcpy(char *a,char *b,int num)
{
	int i=0;
	for(;i<num;i++)
	{
		a[i]=b[i];
	}
	a[i]='\0';
	
}
int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		char **ch=new char *[num];
		for(int i=0;i<num;i++)
		{
			ch[i]=new char[100];
		}
		for(int i=0;i<num;i++)
		{
			cin>>ch[i];
		}
		
		for(int i=0;i<num;i++)
		{
			int min=i;
			for(int j=i+1;j<num;j++)
			{
				if(strcmp(ch[j],ch[min])<0)
				{
					min=j;
				}
			}
			if(min!=i)//»»Î»ÖÃ 
			{
				char *cc=new char[100];
				mystrcpy(cc,ch[min],strlen(ch[min]));
				mystrcpy(ch[min],ch[i],strlen(ch[i]));
				mystrcpy(ch[i],cc,strlen(cc));
			}
		}
		
		for(int i=0;i<num;i++)
		{
			cout<<ch[i]<<endl;
		}
	}
	return 0;
}
