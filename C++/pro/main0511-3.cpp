#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double num;
	while(cin>>num)
	{
		float a=num-(long)num;
		float li=a*10;
		if(li>=5)
			cout<<(long)num+1<<endl;
		else
			cout<<(long)num<<endl;
	}
	return 0;
}
