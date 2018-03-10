#include<iostream>
using namespace std;
int main()
{
	int ge=0,shi=0,bai=0,qian=0,wan=0,temp=0;
	for(long i=10000;i<100000;i++)
	{
		wan=i/10000;
		qian=i%10000/1000;
		bai=i%10000%1000/100;
		shi=i%10000%1000%100/10;
		ge=i%10;
		if(wan==4||qian==4||bai==4||shi==4||ge==4)
			continue;
		else
			temp++;
	}
	printf("%d\n",temp);
	
	return 0;
}