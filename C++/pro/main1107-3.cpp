#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	while(cin>>num){
		if(num<2){
			int i;
			cin>>i;
			cout<<"0"<<" 0"<<endl;
			continue;
		}
		else if(num==2)
		{
			int i,k;
			cin>>i>>k;
			cout<<"1"<<" 1"<<endl;
			continue;
		}
		int a[num];
		for(int i=0;i<num;i++)
		{
			cin>>a[i];
		}
		int max=0,min=0,sum_max=abs(a[0]-a[1]),sum_min=abs(a[0]-a[1]),m_1,m_2;
		for(int i=0;i<num-1;i++)
		{
			for(int j=i+1;j<num;j++)
			{
				m_2=m_1=abs(a[i]-a[j]);
				if(max<m_1)
				{
					max=m_1;
					sum_max=1;
				}
				else if(max==m_1){
					sum_max++;
				}
				if(min>m_2)
				{
					min=m_2;
					sum_min=1;
				}
				else if(min==m_2)
				{
					sum_min++;
				}
			}
		}
		cout<<"min="<<min<<"max="<<max<<endl;
		cout<<"sum_min="<<sum_min<<",sum_max="<<sum_max<<endl;
	}
	
	return 0;
}
