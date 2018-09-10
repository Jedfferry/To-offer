#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch[100];
	while(cin>>ch)
	{
		int length=strlen(ch);
		bool *flag[length];
		for(int i=0;i<length;i++)
		{
			flag[i]=new bool [length];
		}
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
			{
				flag[i][j]=false;
			}
		}
		int max_len=0,start=0;
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
			{
				if(i-j<2)
				{
					flag[j][i]=(ch[j]==ch[i]); 
				}
				else
				{
					flag[j][i]=((ch[j]==ch[i])&&(ch[j+1]==ch[i-1]));
				}
				if(flag[j][i]&&(max_len<(i-j+1)))
				{
					max_len=i-j+1;
					start=j;
				}
			}
		}
		cout<<"start="<<start<<"  max_len="<<max_len<<endl;
		for(int i=0;i<max_len;i++)
		{
			cout<<ch[start+i];
		}
		cout<<endl;
	}
	return 0;
}
