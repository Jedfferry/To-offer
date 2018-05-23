#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		char **ch=new char *[num];
		for(int i=0;i<num;i++)
		{
			ch[i]=new char [100];
		}
		for(int i=0;i<num;i++)
		{
			gets(ch[i]);
		}
		for(int i=0;i<num;i++)
		{
			int sum=strlen(ch[i]);
			if(sum<9)
			{
				cout<<ch[i];
				for(int i=sum;i<9;i++)
				{
					cout<<"0";
				}
				cout<<endl;
			}else
			{
				int i=0;
				for(i;i<sum;i++)
				{
					if(i%8==0)
						cout<<endl;
					cout<<ch[i];
				}
				if(i%8!=0)
				{
					for(int k=i%8;k<9;k++)
					{
						cout<<"0";
					}
				}
				cout<<endl;
			}
			
		}
		
	}
	return 0;
}
