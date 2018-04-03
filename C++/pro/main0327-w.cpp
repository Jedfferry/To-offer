#include <iostream>
//网易实习生笔试题 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,weight;
	int *v=new int [num];
	cin>>num>>weight;
	for(int i=0;i<num;i++)
	{
		cin>>v[i];
	}
	int count=0,sum=0;
//	for(int sum=1;sum<num;sum++)//个数 
//	{
		for(int j=1;j<=sum;j++) //开始 
		{
			for(int k=0;k<j;k++)
			{
				sum+=v[k];
				if(sum<weight)
					count++;
			}
		}
//	}
	return count;
}
