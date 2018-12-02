#include <iostream>
#include <math.h> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double i = 1.0,sum=0.0;
//	int d=2,c=2;
    double all = 0.0;
    int flag =0;
	for(int d = 1;d<20001;d++)
	{
		sum = 0;
		for(int c=d;c<20001;c++)
		{
			double k =i/((double)c+0.7);
			sum+=k;
		}
		double ls = (1/((double)d+0.7))/sum;
		all+=ls;
		if(flag==0 && all>1)
		{
			flag=1;
			cout<<"d1="<<d<<endl;
		}
		if(flag==1 && all>2)
		{
			flag=2;
			cout<<"d2="<<d<<endl;
		}
		if(flag==2 && all>3)
		{
			flag=3;
			cout<<"d3="<<d<<endl;
		}
		if(flag==3 && all>4)
		{
			flag=4;
			cout<<"d4="<<d<<endl;
		}
		if(flag==4 && all>5)
		{
			flag=5;
			cout<<"d5="<<d<<endl;
		}
		if(flag==5 && all>6)
		{
			flag=6;
			cout<<"d6="<<d<<endl;
		}
		if(flag==6 && all>7)
		{
			flag=7;
			cout<<"d7="<<d<<endl;
		}
		if(flag==7 && all>8)
		{
			flag=8;
			cout<<"d8="<<d<<endl;
		}
		if(flag==8 && all>9)
		{
			flag=10;
			cout<<"d9="<<d<<endl;
		}
		//cout<<"d = "<<d<<" zipf = "<<ls<<endl;
	}
	return 0;
}
