#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin >> n;
    cin >> q;
    std::vector<std::vector<int>> a(n);
    std::vector<std::vector<int>> b(q);
    std::vector<int> k(n);
    
    for(int i=0; i<n; i++) {
        cin >> k[i];
        std::vector<int> temp(k[i]);
        for(int j=0; j<k[i]; j++) {
            cin >> temp[j];
        }
        a[i] = temp;
    }
    
    for(int i=0; i<q; i++) {
        std::vector<int> temp(2);
        for(int j=0; j<2; j++) {
            cin >> temp[j];
        }
        b[i] = temp;
    }
    
    for(int i=0; i<q; i++) {
        std::vector<int> temp(k[i]);
        temp = b[i];
        
        cout << a[temp[0]][temp[1]] << endl;
    }
        
    return 0;
}
