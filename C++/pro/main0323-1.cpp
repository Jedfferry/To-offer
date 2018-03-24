#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numx[4];
int numy[4];
int check(int *x,int *y)
{
		int bianbian[6];
		 bianbian[0]=sqrt(double(abs(y[1]-y[0])/abs(x[1]-x[0])));
		 bianbian[1]=sqrt(double(abs(y[2]-y[0])/abs(x[2]-x[0])));
		 bianbian[2]=sqrt(double(abs(y[3]-y[0])/abs(x[3]-x[0])));
		 bianbian[3]=sqrt(double(abs(y[2]-y[1])/abs(x[2]-x[1])));
		 bianbian[4]=sqrt(double(abs(y[3]-y[1])/abs(x[3]-x[1])));
		 bianbian[5]=sqrt(double(abs(y[3]-y[2])/abs(x[3]-x[2])));
		for(int j=0;j<6;j++)
		{
			int sum=0;
			for(int k=1;k<6;k++)
			{
				if(bianbian[j]==bianbian[k])
					sum++;
				if(sum==4)
					return true;
			}
		
	
	return false;
}
int main(int argc, char** argv) {
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>numx[j];
		}
		for(int k=0;k<4;k++)
		{
			cin>>numx[k];
		}
		if(check(numx,numy))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
