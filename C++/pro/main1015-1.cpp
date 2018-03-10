#include<iostream>
#include<string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void replaceSpace(char *str,int length) {
/*	if(str==NULL||length<=0)
	{
		return ;
	} 
    char ss[20];
    int p_num=0;
    const char *b="%20";
    for(int i=0;i<length;i++)
    {
        if(((int)str[i]==32))
        {
            strcat(ss,b);
            p_num+=3;
        }
        else
        {
            ss[p_num]=str[i];
            p_num++;
        }
    }
    ss[p_num]='\0';
	for(int i=0;i<p_num;i++)
    {
        str[i]=ss[i];
    }*/
	for(int i=0;i<length;i++)
    {
        if((int)str[i]==32)
        {
            for(int j=3;j>0;j--)
            {
                str[length+j]=str[i+j];
            }
            {
                str[i+1]='%';
                str[i+2]='2';
                str[i+3]='0';
            }
            length+=3;
            i+=3;
        }
     
    } 
}
int main(int argc, char** argv) {
	char a[]="hei hei";
	cout<<a<<endl;
	replaceSpace(a,strlen(a));
	cout<<a<<endl;
	return 0;
}

