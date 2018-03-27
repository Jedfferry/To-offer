#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {
	}
};

void printListFromTailToHead(ListNode* pListHead){
    if(pListHead!=NULL){
        
        //print the next node first
        if(pListHead->next!=NULL){
            printListFromTailToHead(pListHead->next);    
        }

        // And then print the current node
        print("%d",pListHead->val);
    }
}
int main(int argc, char** argv) {
	ListNode l1=
	return 0;
}
