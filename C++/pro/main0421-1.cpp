#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void find(char *ch1,char *ch2,int num,int *a)
{
	
}
int main(int argc, char** argv) {
    char *ch_num[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE",
	"SIX","SEVEN","EIGHT","NINE"};
	int num;
	while(cin>>num)
	{
		char **ch=new char *[num];
		for(int i=0;i<num;i++)
		{
			ch[i]=new char[10000];
		}
		fflush(stdin);
		for(int i=0;i<num;i++)
		{
			gets(ch[i]);	
		}'''''
		for(int i=0;i<num;i++)
		{
			int chn=strlen(ch[i]);
			int *flag=new int [chn];
			for(int k=0;k<chn;k++)
			{
				flag[k]=0;
			}
			for(int j=0;j<10;j++)
			{
				find(ch[i],ch_num[j],j,flag);
			}
		}
	}
	return 0;
}
