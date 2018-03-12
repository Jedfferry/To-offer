#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int qqnum[5000];
int kKnum=0;
int find_high(int *num,int a,int b)
{
	int highest=0;
	for(int i=a+1;i<=b;i++)
	{
		if(num[i]>highest)
			highest=num[i];
	}
	qqnum[kKnum++]=highest;
	return highest;
}
void update(int *num,int a,int b)
{
	num[a]=b;
}
int main(int argc, char** argv) {
	int n,m;
	cin>>n>>m;
	int *num=new int [n+1];//≥ı º≥…º® 
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<m;i++)
	{
		char ch;
		cin>>ch;
		int num1,num2;
		cin>>num1>>num2;
		if(ch=='Q')
			find_high(num,num1,num2);
		else if(ch=='U')
			update(num,num1,num2);
	} 
	for(int i=0;i<kKnum;i++)
	{
		cout<<qqnum[i]<<endl;
	}
	return 0;
}
