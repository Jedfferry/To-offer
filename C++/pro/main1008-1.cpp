#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		for(int p=0;p<num;p++)
		{
			char ch[12];
			cin>>ch;
			int length=strlen(ch);
			int *a=new int [length];
			for(int i=0;i<length;i++)
			{
				a[i]=(int)(ch[i]-'0');
			}
			int sum=1;
			int count=0;
			for(int i=0;i<length;i++)
			{
				sum*=2;
			}
			for(int i=0;i<sum;i++)//存在length个符号的 
			{
				int k[length];
				for(int j=0;j<length;j++)
				{
					k[j]=0;
				}
				int bb=i,n=length-1;;
				while(bb)
				{
					int nb=bb;
					if(nb&1)
					{
						k[n]=1;
					}
					n--;bb=bb>>1;
				}
				int sssss=0;
				for(int j=0;j<length;j++)
				{
					if(k[j]==0)
					{
						sssss-=a[j];
					}
					else
						sssss+=a[j];
				}
				if(sssss==0)
					count++;
			}
			//存在3个符号的
			 
			cout<<count+2<<endl;
		}
	}
	return 0;
}
