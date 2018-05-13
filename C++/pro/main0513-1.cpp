#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch[1000];
	while(cin>>ch)
	{
		int *num=new int [128];
		for(int i=0;i<128;i++)
		{
			num[i]=0;
		}
		char *p=ch;
		int sum=0;
		do{
			int n=(int)(*p);
			if(0<=n&&n<=127)
			{
				if(num[n]==0)
				{
					num[n]=1;
					sum++;
				}
			}
			*p++;
		}while(*p!='\0');
		cout<<sum<<endl;
	}
	return 0;
}
