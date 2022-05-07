#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a,int b,int c, int d) {
    vector<int> num(4);
    num={a,b,c,d};
    int max = a;
    for (int itr=1; itr<4; itr++) {
        if( max < num[itr] ) {
            max = num[itr];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}