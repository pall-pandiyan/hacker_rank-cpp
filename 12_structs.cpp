#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    int age;
//    char firstName[50];
//    char lastName[50];
    std::string firstName;
    std::string lastName;
    int standard;
};

int main() {
    student st;
    std::cin >> st.age >> st.firstName >> st.lastName >> st.standard;
    std::cout << st.age << " " << st.firstName << " " << st.lastName << " " << st.standard;
    
    return 0;
}
