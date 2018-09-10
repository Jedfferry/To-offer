#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num)
	{
		int *a=new int [num];
		int sum=0,avg=0;
		for(int i=0;i<num;i++)
		{
			cin>>a[i];sum+=a[i];
		}
		avg=sum/num;
		int count=0;
		bool flag=true;
		if(sum-avg*num!=0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(int i=0;i<num;i++)
			{
			/*	int cha=a[i]-avg;
				if(cha>=0)
					continue;
				cha=0-cha;
				while((cha%2==0)&&(cha!=0))
				{
					count++;
					cha=cha>>1;
				}*/
				if(a[i]>avg)
				{
					if((a[i]-avg)%2==0)
						count+=(a[i]-avg)/2;
					else
					{
						flag=false;
						break;
					}
				}
			}
			if(flag)
				cout<<count<<endl;
			else 
				cout<<"-1"<<endl;
		}
		
	}
	return 0;
}
