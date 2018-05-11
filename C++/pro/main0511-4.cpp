#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	int *zhi=new int [10000];
	for(int i=0;i<10000;i++)
	{
		zhi[i]=0;
	}
	while(cin>>num)
	{
		int num1,num2;
		for(int i=0;i<num;i++)
		{
			cin>>num1>>num2;
			zhi[num1]+=num2;
		}
		for(int i=0;i<10000;i++)
		{
			if(zhi[i]!=0)
			{
				cout<<i<<" "<<zhi[i]<<endl;
			}
		}
	}
	return 0;
}
