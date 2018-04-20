#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	while(cin>>n)
	{
		long long  *num=new long long [n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<n;i++)
		{
			if(num[i]<10)
			{
				cout<<num[i]<<endl;continue;
			}
			if(10<=num[i]&&num[i]<100)
				cout<<10+(num[i]-10)*2+1<<endl;
			if(100<=num[i]&&num[i]<1000)
				cout<<9+90*2+(num[i]+1-100)*3<<endl;
			if(1000<=num[i]&&num[i]<10000)
				cout<<9+90*2+300+(num[i]+1-1000)*4<<endl;
            if(10000<=num[i]&&num[i]<100000)
				cout<<9+90*2+300+4000+(num[i]+1-10000)*5<<endl;
            if(1000000<=num[i]&&num[i]<1000000)
				cout<<9+90*2+300+4000+50000+(num[i]+1-100000)*6<<endl;
             if(10000000<=num[i]&&num[i]<10000000)
				cout<<9+90*2+300+4000+50000+60000+(num[i]+1-1000000)*7<<endl;
             if(100000000<=num[i]&&num[i]<100000000)
				cout<<9+90*2+300+4000+50000+60000+700000+(num[i]+1-10000000)*8<<endl;
		}
	}
	return 0;
}
