#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(char *ch,int num1,int num2)
{
	for(int i=num1,j=num2;i<=j;i++,j--)
	{
		char p=ch[i];
		ch[i]=ch[j];
		ch[j]=p;
	}
}
int main(int argc, char** argv) {
	char ch[5000];
	while(gets(ch))
	{
		int num;
		char *p=ch;
		do{
			num++;
			*p++;
		}while(*p!='\0');
		reverse(ch,0,num);
		int flag1=0,flag2=0;
		for(int i=0;i<=num;i++)
		{
			if(ch[i]==' '||ch[i]=='\0')
			{
				flag2=i;
				reverse(ch,flag1,flag2-1);
				flag1=flag2;
			}
		}
		reverse(ch,flag1,num);
		for(int i=0;i<num;i++)
		{
			cout<<ch[i];
		}
		cout<<endl;
	}
	return 0;
}
