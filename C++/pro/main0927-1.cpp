#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch[100];
	while(cin>>ch)
	{
		int num;
		cin>>num;
		int length=strlen(ch);
		int l=0; 
		int i=-1;
		int *n=new int [200];
		int n_num=0;
		int chang=1; 
		int flag=0;
		while(i++<length-1)//计算 
		{
			if(ch[i]==',')
			{
				n[n_num]=l;
				n_num++;
				l=0;
				if(flag==0)
					chang++;
			}
			else if(ch[i]=='|')
			{
				flag=1;
				n[n_num]=l;
				n_num++;
				l=0;
				continue;
			}
			else
			{
				l=l*10+(int)(ch[i]-'0');
			}
		}
		n[n_num]=l;//保存最后一个数到数组里 	
		int kuan=n_num/chang;
		cout<<chang<<endl;
		cout<<kuan<<endl;
	}
	return 0;
}
