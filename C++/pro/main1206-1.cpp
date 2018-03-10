#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//常用算法 
int CommFactor(int m,int n)
{
	int i,factor=1;
	for(i=2;i<m&&i<n;i++)
	{
		while(m%i==0&&n%i==0)
		{
			factor*=i;
			m/=i;
			n/=i;
		}
	}
	return factor;
} 
//欧几里得算法
int CommFactor1(int m,int n)
{
	int r=m%n;
	while(r)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return n;
} 
int main(int argc, char** argv) {
	cout<<CommFactor1(48,36)<<endl; 
	return 0;
}
