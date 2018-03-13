#include <iostream>
using namespace std;
//华为2016年上级笔试题
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int score[30001];
int find(int a,int b)
{
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	int higest=0;
	for(int i=a;i<=b;i++)
	{
		if(score[i]>higest)
			higest=score[i];
	}
	return higest;
}
int main(int argc, char** argv) {
	int n,m;
	while(cin>>n>>m)
	{
		
		char ch;
		int num1,num2;
		for(int i=1;i<=n;i++)
		{
			cin>>score[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>ch>>num1>>num2;
			if(ch=='Q')
				cout<<find(num1,num2)<<endl;
			else if(ch=='U')
				score[num1]=num2;
		}
	}
	return 0;
}
