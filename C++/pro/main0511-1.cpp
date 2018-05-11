#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long n;
	int *num=new int [10000];
	int kk=0; 
	for(int i=0;i<10000;i++)
	{
		num[i]=0;
	}
	for(int i=3;i<99999;i++)
	{
		int k=sqrt(i);
		for(int j=2;j<k;j++)
		{
			if(i%j==0)
				break;
		}
		if(i>=k)
		{
			num[kk]=i;
			kk++;
		}
	}
	for(int i=0;i<20;i++)
	{
		cout<<num[i]<<"  ";
	}
	return 0;
}
