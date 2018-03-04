#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int find(int *a,int row,int col,int num)
{
	for(int i=row;i>=0;i--){
		for(int j=0;j<col;j++)
		{
			if(a[i][j]>num)
			{
				i--;break;
			}
			else if(a[i][j]<num)
			{
				j++;break;
			}
			else if(a[i][j]==num)
				return 1;
		}
	}
	return 0;
}

int main(int argc, char** argv) {
	int a[4][4]={1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
	cout<<find(a,4,4,7)<<endl;
	return 0;
}
