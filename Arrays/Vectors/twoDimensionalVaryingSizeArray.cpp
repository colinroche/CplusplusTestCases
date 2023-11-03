#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> a(n);
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >>  k;
        
        for (int j = 0; j < k; ++j) {
            int element;
            cin >> element;
            a[i].push_back(element);
        }
    }
    
    for (int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    
    return 0;
}