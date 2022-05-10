#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string s1,s2;
    std::cin >> s1;
    std::cin >> s2;
    std::cout << s1.length() << " " << s2.length() << endl;
    std::cout << s1+s2 << endl;
    char ch;
    ch = s1[0];
    s1[0] = s2[0];
    s2[0] = ch;
    std::cout << s1 << " " << s2 << endl;
    return 0;
}
