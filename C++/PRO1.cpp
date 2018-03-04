#include<iostream>
using namespace std;
int main()
{
	int j,k,num1=0;
	int a,b,num2=0;
	j = 10; 
	do{ 
		k = 50; 
		do{ 
		num1++;
		}while(--k);     
	}while(--j); 
	for(a=10;a>0;a--)
	{
		for(b=50;b>0;b--)
			num2++;	
	}	
	cout<<a<<endl<<b<<endl;
	return 0;
}
