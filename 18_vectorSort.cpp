#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    std::cin >> n;
    std::vector<int> v1;
    for(int i=0; i<n; i++) {
        int temp;
        std::cin >> temp;
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    for(int i=0; i<n; i++) {
        std::cout << v1[i] << " ";
    }
    return 0;
}
