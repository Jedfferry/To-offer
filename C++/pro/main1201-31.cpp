#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m,x,y,t;
	while(cin>>n>>m>>x>>y>>t){
		double pcc=0.0;
		double pss=0.0;
		double p;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>p;
				p=1.0-p;
				if(i==x&&j==y){
					pcc=p;
				}
				pss+=p;
			}
		}
		pss =pss/n/m;
        if (pss < pcc) {
            printf("ss\n%.2f\n", 1.0 - pow(pss, t));
        } else if (pss == pcc) {
            printf("equal\n%.2f\n", 1.0 - pow(pcc, t));
        } else {
            printf("cc\n%.2f\n", 1.0 - pow(pcc, t));
        }
	}
	return 0;
}
