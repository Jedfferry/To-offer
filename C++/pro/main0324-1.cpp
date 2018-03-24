#include <iostream>
#include <math.h>
//判断四个点是不是正方形 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numx[4],numy[4];
int check(int *x,int *y)
{
	int bian[6];
	 bian[0]=sqrt((abs(y[0]-y[1]))*(abs(y[0]-y[1]))+(abs(x[0]-x[1]))*(abs(x[0]-x[1])));
	 bian[1]=sqrt((abs(y[0]-y[2]))*(abs(y[0]-y[2]))+(abs(x[0]-x[2]))*(abs(x[0]-x[2])));
	 bian[2]=sqrt((abs(y[0]-y[3]))*(abs(y[0]-y[3]))+(abs(x[0]-x[3]))*(abs(x[0]-x[3])));
	 bian[3]=sqrt((abs(y[1]-y[2]))*(abs(y[1]-y[2]))+(abs(x[1]-x[2]))*(abs(x[1]-x[2])));
	 bian[4]=sqrt((abs(y[1]-y[3]))*(abs(y[1]-y[3]))+(abs(x[1]-x[3]))*(abs(x[1]-x[3])));
	 bian[5]=sqrt((abs(y[2]-y[3]))*(abs(y[2]-y[3]))+(abs(x[2]-x[3]))*(abs(x[2]-x[3])));
	int count1=1,count2=0;
	int sum1=0,sum2=0;
	sum1=bian[0];
	for(int i=1;i<6;i++)
	{
		if(bian[i]==sum1)
		 	count1++;
		else if(sum2==0)
		{
			if(bian[i]==sqrt(2*sum1*sum1)||sum1==sqrt(2*(bian[i])*(bian[i])))
			{
				sum2=bian[i];count2++;
			}		
		}
		else
		{
			if(bian[i]!=sum1 && bian[i]!=sum2)
				return false;
		}
	}
	if(count1==4||count2==4)
		return true;
	return false;
}
int main(int argc, char** argv) {
	int snum;
	cin>>snum;
	for(int i=0;i<snum;i++)
	{
		for(int j=0;j<4;j++)
			cin>>numx[j];
		for(int k=0;k<4;k++)
			cin>>numy[k];
		if(check(numx,numy))
			cout<<"Yes"<<endl;	
		else 
			cout<<"No"<<endl;	
	}
	return 0;
}
