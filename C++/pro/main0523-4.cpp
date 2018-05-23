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
			cin>>ch[i];
		}
		for(int i=0;i<num;i++)
		{
			int sum=strlen(ch[i]);
			if(sum<9)
			{
				cout<<ch[i];
				for(int i=sum;i<8;i++)
				{
					cout<<"0";
				}
				cout<<endl;
			}
			else
			{
				int j=0;
				cout<<ch[i][j];
				for(j=1;j<sum;j++)
				{
					if(j%8==0)
						cout<<endl;
					cout<<ch[i][j];
				}
				if(j%8!=0)
				{
					for(int k=j%8;k<8;k++)
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
