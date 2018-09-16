#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cal(int w,float y,float x,int n)
{
	double sum=(double )((1-x)*w*y+w*x*21)/w;
	int a=(int)sum;
	if(sum-a>0)
		return sum+1;
	else
		return a;
}
int main(int argc, char** argv) {
	int w,y,n;
	float x;
	int avg=0;
	while(cin>>w>>y>>x>>n)
	{
		if(n==1)
		{
			avg=cal(w,(float)y,x,n);
		}
		else
		{
			float k=(float)y;
			for(int i=0;i<n;i++)
			{
				k=(1-x)*k+x*21;
			}
			avg=cal(w,k,x,n);
		}
		cout<<avg<<endl;
	}
	return 0;
}
