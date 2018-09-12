#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		int count=0,flag=0;
		int num1=num/6,num2=num/8;
		for(int i=0;i<num1;i++)
		{
			for(int j=0;j<num2;j++)
			{
				if(i*6+j*8==num)
				{
					if(flag==0)
					{
						count=i+j;
						flag=1;
						break;
					}
				}
				else if(i*6+j*8>num)
				{
				//	break;
				}
			}
		}
		if(count==0)
			cout<<"-1"<<endl;
		else
			cout<<count<<endl;
	}
	return 0;
}
