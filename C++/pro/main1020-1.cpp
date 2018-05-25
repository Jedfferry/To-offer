#include <iostream>
using namespace std; 
#define MAXSIZE 20
typedef int KeyType,InfoType;
typedef struct{
	KeyType key;
	InfoType otherinfo;
}RedType;
typedef struct{
	RedType r[MAXSIZE+1];
	int length;
}SqList;
SqList L;
RedType rc,rs;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void HeapAdjust(SqList &L,int s,int m)
{
	//假设r[s+1...m]已经是堆，将r[s..m]调整为以r[s]为根的大根堆
	rc=L.r[s];
	for(int j=2*s;j<=m;j*=2){
		if(j<m&&L.r[j].key<L.r[j+1].key) ++j;//沿key较大的孩子节点向下筛选
		if(rc.key>=L.r[j].key) break;       //rc应插入在位置s上
		L.r[s]=L.r[j];s=j; 
	} 
	L.r[s]=rs;	//插入 
}
void CreatHeap(SqList &L)
{
	int n=L.length;
	for(int i=n/2;i>0;i--)
	{
		HeapAdjust(L,i,n);
	}
}
void HeapSort(SqList &L){
	CreatHeap(L);
	for(int i=L.lenngth;i>1;i--){
		x=L.r[l];
	}
}
int main(int argc, char** argv) {
	return 0;
}
