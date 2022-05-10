#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    char chTemp;
    int commaCount=0;
    for (int i=0; i<str.length(); i++) {
        if(str[i]==',') {
            commaCount++;
        }
    }
    std::vector<int> result(commaCount+1);
    stringstream ss (str);
    for(int i=0; i<commaCount+1; i++) {
        ss >> result[i];
        if(i!=commaCount) {
            ss >> chTemp;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}
