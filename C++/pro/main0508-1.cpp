#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *flag=new int [1000];
int find(char *ch1,char *ch2,int num1,int num2,int *flag)
{
	int sum=0;
	int *pos=new int[num2];
	int *nflag=new int[num2];
	for(int i=0;i<num2;i++)
	{
		pos[i]=0;nflag[i]=0;
	}
	int ss=0;
	for(int i=0;i<num1;i++)
	{
		if(flag[i]==1)
			continue;
		else
		{
			for(int k=0;k<num2;k++)
			{
				if(ch1[i]==ch2[k] &&(nflag[i]!=1))
				{
					nflag[k]==1;pos[ss]=i;ss++;i++;
				}
			}
		}
		if(ss==num2&&())
		{
			sum++;
			for(int j=0;j<num2;j++)
			{
				flag[pos[j]]=1;//±ê¼Ç
				pos[j]=0;//ÇåÁã
				nflag[j]=0;
			}
		}
	}
	return sum;	
}
int main(int argc, char** argv) {
    char *ch[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE",
	"SIX","SEVEN","EIGHT","NINE"};
	int num;
	while(cin>>num)
	{
		char **coco=new char*[num];
		for(int i=0;i<num;i++)
		{
			coco[i]=new char [10000];
		}
		for(int i=0;i<num;i++)
		{
			cin>>coco[i];
		}
		
		for(int i=0;i<num;i++)
		{	
			int length=strlen(coco[i]);
			
			for(int k=0;k<length;k++)
			{
				flag[k]=0;
			}
			for(int j=0;j<10;j++)
			{
				int len=strlen(ch[j]);
				int lin=find(coco[i],ch[j],length,len,flag);
				for(int i=0;i<lin;i++)
				{
				/*	int sum=j-8;
					if(sum<0)
						cout<<0-sum;
					else 
						cout<<sum;*/
						cout<<j; 
				}
			}
			cout<<endl;
		}	
	}
	return 0;
}
