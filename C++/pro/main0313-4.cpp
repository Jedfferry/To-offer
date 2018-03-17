#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define min(a,b) a<b?a:b

int shizi[100],dp[100][100];
int sum(int a,int b,int n)
{
	int k_sum=0,kk;
	for(int i=a;i<a+b;i++)
	{
		kk=i%n;
		if(kk==0)
			kk=n;
		k_sum+=shizi[kk];
	}
	return k_sum;
}

int main(int argc, char** argv) {
	int dui_num,sum_num;
	cin>>dui_num>>sum_num;
	for(int i=0;i<dui_num;i++)
	{
		for(int j=1;j<=sum_num;j++)//输入石子的重量 
		{
			cin>>shizi[j];
			dp[j][1]=0;//花费为0 
		}
		//动态规划
	    for(int r=2;r<=sum_num;r++)
	    {
	    	for(int s=1;s<=sum_num;s++)
	    	{
	    		dp[s][r]=6666;
	    		for(int k=1;k<r;k++)
	    		{
	    			int ak=sum(s,r,sum_num);
	    			int ls=(s+k-1)%sum_num+1;
	    			dp[s][r]=min(dp[s][r],dp[s][k]+dp[ls][r-k]+ak);
				}
			}
		}
	    int mini=6666; 
	    for(i=1;i<=sum_num;i++){
	        mini=min(mini,dp[i][sum_num]);    
	    }
	    cout<<mini<<endl;
	}
	return 0;
}
