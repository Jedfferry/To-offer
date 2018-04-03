#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,x,y,t;
	while(cin>>n>>m>>x>>y>>t){
		double pss=0.0,pcc=0.0;
		double p;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>p;
				p=1.0-p;
				if(i==x&&j==y)
					pcc=p;
				pss+=p;
			}
		}
		pss=pss/n/m;
		if(pss==pcc)
		{
			cout<<"equal"<<endl<<1.0-pow(pcc,t)<<endl;
		}
		else if(pss<pcc)
		{
			cout<<"ss"<<endl<<1.0-pow(pss,t)<<endl;
		}
		else{
			cout<<"cc"<<endl<<1.0-pow(pcc,t)<<endl;
		}
	}
	return 0;
}
