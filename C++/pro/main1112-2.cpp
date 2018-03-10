#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MKSTR(x) #x
int main(int argc, char** argv) {
	cout<<MKSTR(Hello C++)<<endl;
	return 0;
}
