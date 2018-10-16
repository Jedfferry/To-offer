#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int change(int n,int m,int num)
{
	int l=1,sum=0;
	while(m)
	{
		int a=m%10;
		sum+=a*l;
		m/=10;
		l=l*n;
	}
	return sum;
}
int main(int argc, char** argv) {
	char ch[100];
	int first=0,temp=1;
	char num[100][100];	
	int ch_num=0;
	
	while(cin>>ch)
	{
		int second=0;
		if(strcmp(ch,"END")==0)
		{
			break;
		}
		int length=strlen(ch);
		int num1=0,num2=0,flag=0;
		int length1=0,length2=0;
		for(int i=0;i<length;i++)
		{
			if(ch[i]=='#')
				flag=1;
			else if(flag==0)
			{
				num1=num1*10;
				num1+=(int)(ch[i]-'0');
				length1++;
			}
			else if(flag==1)
			{
				num2=num2*10;
				num2+=(int)(ch[i]-'0');
				length2++;
			}
		}
	//	cout<<"num1="<<num1<<"   num2="<<num2<<endl;
		//转换为十进制数
		if(temp==1)
		{
			first=change(num1,num2,length1);temp++;
		}
		else
		{
			second=change(num1,num2,length1);
			if(second!=first)
			{
				for(int kk=0;kk<length;kk++)
				{
					num[ch_num][kk]=ch[kk];
				}
				//num[ch_num]=1;
				ch_num++;
				//qq=1;
				//strcpy(no,ch[ch_num]);
				
				//cout<<no<<endl;
			}
		}
	//	cout<<"sum="<<first<<endl; 
	}
	if(ch_num==0)
	{
		cout<<"None"<<endl;
	}
	else
	{
		for(int i=0;i<ch_num;i++)
		{
			cout<<num[i]<<endl;
		}
	}
	return 0;
}
