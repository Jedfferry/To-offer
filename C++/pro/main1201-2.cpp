#include <iostream>
#include <math.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num){
		int *x=new int [num];
		int *y=new int [num];
		for(int i=0;i<num;i++)
		{
			cin>>x[i];
			cin>>y[i];
		}
		int xmax=0,xmin=0,ymax=0,ymin=0,count=0;
		for(int i=0;i<num;i++)
		{
			if(x[i]>xmax)
			{
				xmax=x[i];
			}
			if(x[i]<xmin)
			{
				xmin=x[i];
			}
			if(y[i]>ymax)
			{
				ymax=y[i];
			}
			if(y[i]<ymin)
			{
				ymin=y[i];
			}
		} 
		if(xmax-xmin<=ymax-ymin)
		{
			count=ymax-ymin;
		}
		else
			count=xmax-xmin;
		cout<<count*count<<endl;
	}
	
	return 0;
}
