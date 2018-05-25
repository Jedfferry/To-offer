#include <iostream>
using namespace std;
#define MAXSIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int hash[MAXSIZE];//哈希数组 
	for(int i=0;i<MAXSIZE;i++)
	{
		hash[i]=0;
	}
	int num[MAXSIZE];//金额数组 
	int size_num;//金额大小
	int count=0,lg=0;
	for(int j=0;j<MAXSIZE;j++)
	{
		cin>>num[j];
	} 
	cin>>size_num;
	for(int k=0;k<size_num;k++)
	{
		hash[num[k]]++;
		if(hash[num[k]]>count)
		{
			count=hash[num[k]];
			lg=num[k];
		}
	}
	if(count<=size_num/2)
		cout<<"0"<<endl;
	else
		cout<<lg<<endl;
	return 0;
}
