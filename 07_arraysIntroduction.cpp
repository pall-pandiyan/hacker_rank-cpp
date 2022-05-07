#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
        
    cin >> n;
    vector<int> a(n);
    for(int itr=0; itr<n; itr++) {
        cin >> a[itr];
    }
    
    vector<int> b(n);
    for (int itr=0; itr<n; itr++) {
        b[n-itr-1] = a[itr];
    }
        
    for(int itr=0; itr<n; itr++) {
        cout << b[itr];
        cout << " ";
    }
    cout << endl;
    return 0;
}
