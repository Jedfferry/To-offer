#include<iostream>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void replaceSpace(char *str,int length) {
	if(str==NULL||length<=0)
	{
		return ;
	} 
	int knum=0;
	for(int i=0;i<length;i++)
	{
		if((str[i]==' '))
		{
			knum++;
		}
	}
	int newlength=knum*2+length;
	for(int i=length,j=newlength;i>=0;i--)
	{
		if(str[i]==' ')
		{
			str[j--]='0';
			str[j--]='2';
			str[j--]='%';
		}
		else
		{
			str[j--]=str[i];
		}
	}
/*	char ss[knum*2+length];
    int p_num=0;
    for(int i=0;i<length;i++)
    {
        if((str[i]==' '))
        {
        	ss[p_num++]='%';
            ss[p_num++]='2';
			ss[p_num++]='0';
        }
        else
        {
            ss[p_num++]=str[i];
        }
    }
    strcpy(str,ss);*/
}
int main(int argc, char** argv) {
	char a[]="We are happy";
	cout<<a<<endl;
	replaceSpace(a,strlen(a));
	cout<<a<<endl;
	return 0;
}

