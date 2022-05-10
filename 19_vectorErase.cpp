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
    int x,a,b;
    std::cin >> x;
    std::cin >> a >> b;
    v1.erase(v1.begin()+(x-1));
    v1.erase(v1.begin()+(a-1),v1.begin()+(b-1));
    std::cout << v1.size() << endl;
    for(int i=0; i<v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    return 0;
}
