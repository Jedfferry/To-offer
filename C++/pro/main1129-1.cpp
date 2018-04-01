#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[]={1,2,3,4,5};
	int *p=(int *)(&a+1);
	printf("%d\n",*(p-1));

	printf("%d",a[1]);	
	return 0;
}
