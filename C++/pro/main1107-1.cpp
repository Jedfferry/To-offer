#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s;
	cin>>s;
	int num=s.length();
	int snum=0;
	int i=0,j=num-1;
	do{
		if(s[i]==s[j]){
			i++;j--;
		}
		else{
			j--;snum++;
		}
	}while(i<j);
	cout<<snum<<endl;
	
	return 0;
}
