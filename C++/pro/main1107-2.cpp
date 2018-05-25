#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	int num=s.length();
	char q;
	for(int tmp=0,i=0;tmp<num;tmp++)
	{
		if(s[i]<'a')
		{
			q=s[i];
			for(int j=i;j<num-1;j++)
			{
				s[j]=s[j+1];
			}
			s[num-1]=q;
		}
		else
		    i++;
	}
	cout<<s<<endl;
	return 0;
}
