#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		vector<int>array;
        array.push_back(100);
        array.push_back(300);
        array.push_back(300);
        array.push_back(500);
        vector<int>::iterator itor;
        for(itor = array.begin(); itor != array.end(); itor++){
            if(*itor == 300){
                itor = array.erase(itor);
            }
        }
        for(itor = array.begin(); itor != array.end(); itor++){
            cout << *itor << " ";
        }
	return 0;
}

