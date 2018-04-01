#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,t,c,sum,count;
	while(cin>>n>>t>>c){
		sum=0,count=0;
		if(c>n||c<0)
	       continue;
		int *a=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		} 
		for(int j=0;j<n-c+1;j++)
		{
			sum=0;
			for(int k=0;k<c;k++)
			{
				sum+=a[j+k];
			}
			if(sum<=t)
			{
				count++;
			}
		}
	/*	for(int i = 0; i < c; ++i)
			sum += a[i];
		if(sum <= t) ++count;
		for(int i = c; i < n; ++i){
		sum -= a[i-c];
		sum += a[i];
		if(sum <= t) ++count;
		}*/
		cout<<count<<endl;
	}
	
	return 0;
}
