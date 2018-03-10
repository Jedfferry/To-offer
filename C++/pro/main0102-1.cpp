#include <iostream>
#include <string.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double pri[7];
	string ch[8]={"haiwai","hua an","guotai hunhe","jiaoyinA ","jiashihugangshen","hulianwang+","xingquan"};
	double num[7]={-0.0047,-0.0005,-0.0079,0.0045,-0.0073,-0.0006,-0.0078};
	double sum=0.0;
	for(int i=0;i<7;i++)
	{
		cout<<ch[i]<<":";
		cin>>pri[i];
		sum+=num[i]*pri[i];
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}
