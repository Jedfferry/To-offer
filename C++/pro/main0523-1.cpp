#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
inline double abs(double x)
{
	return (x>0?x:-x);
}
double cubert(const double y){
    double x;
    for(x=1.0;abs(x*x*x-y)>1e-7;x=(2*x+y/x/x)/3);
    return x;
}

int main(int argc, char** argv) {
	double input;
	while(cin>>input)
	{
		printf("%.1f\n",cubert(input));
	} 
	return 0;
}
