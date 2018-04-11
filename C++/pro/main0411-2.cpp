#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[4]={1,24,24*24,24*24*24};
	char ch1[100];
	cin>>ch1;
	int sum=0,i=0;
	char *p=ch1;
	while(ch1[i]!='\0'){
		if(ch1[i]=='a')
			sum++;
		else
		{
			int ss=0;
			for(int j=i;j>=1;j--)
				ss+=a[j];
			sum+=(ch1[i]-'a')*ss;
		}
		i++;
	};
	cout<<sum<<endl;
	return 0;
}
