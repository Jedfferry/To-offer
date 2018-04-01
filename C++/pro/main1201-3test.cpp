#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, x, y, t;
     
    while (cin >> n>>m>>x>>y>>t)
    {
        vector<vector<double>>f(n + 1, vector<double>(m + 1, 0.0));
        double sum = 0.0;
        for (size_t i = 1; i < n+1; i++)
        {
            for (int j = 1; j < m+1; j++)
            {
                cin >> f[i][j];
                sum += f[i][j];
            }
        }
        double cc = 1 - pow(1.0-f[x][y], t);
        double ss = sum /(m*n);
        ss = 1 - pow(1.0 - ss, t);
        if (cc==ss)
        {
            cout << "equal" << endl<<setiosflags(ios::fixed)<< setprecision(2) << ss << endl;
        }
        else if(cc>ss)
        {
            cout << "cc" <<endl<<setiosflags(ios::fixed)<< setprecision(2) << cc << endl;
        }
        else
        {
            cout << "ss" << endl <<setiosflags(ios::fixed)<< setprecision(2) << ss << endl;
        }
 
	}
	return 0;
}
