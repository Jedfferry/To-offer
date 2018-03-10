#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int minNumberInRotateArray(int *rotateArray) {
        int length=sizeof(rotateArray)/sizeof(rotateArray[0])+2;
        cout<<length<<endl;
        if(length==0)
            return 0;
        int max,min=rotateArray[0];
        for(int i=0;i<length;i++)
        {
            for(int j=i;j<length;j++)
            {
                if(rotateArray[j]<rotateArray[i])
                {
                    if(rotateArray[j]<min)
                        min=rotateArray[j];
                    max=rotateArray[i];
                    rotateArray[i]=rotateArray[j];
                    rotateArray[j]=max;
                }
            }
        }
        return min;
}
int main(int argc, char** argv) {
	int num[]={61245,147,55,8754,1};
	cout<<sizeof(num)/sizeof(num[0])<<endl;
	cout<<minNumberInRotateArray(num)<<endl;
	return 0;
}
