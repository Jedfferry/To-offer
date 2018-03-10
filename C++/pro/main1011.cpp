#include <iostream>
#define DOUBLE(x) x+x
#ifdef __cplusplus cout<<"C++";
#else cout<<"C";
#endif

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i=5*DOUBLE(5);
	cout<<i<<endl;
	return 0;
}
