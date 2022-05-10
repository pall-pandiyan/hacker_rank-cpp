#include <iostream>
#include <sstream>
using namespace std;

class student {
  private:
    int age;
    std::string firstName;
    std::string lastName;
    int standard;

  public:
    void setAge(int a) {
        age = a;
    }
    
    int getAge() {
        return age;
    }
    
    void setFirstName(std::string a) {
        firstName = a;
    }
    
    std::string getFirstName() {
        return firstName;
    }
    
    void setLastName(std::string a) {
        lastName = a;
    }
    
    std::string getLastName() {
        return lastName;
    }
    
    void setStandard(int a) {
        standard = a;
    }
    
    int getStandard() {
        return standard;
    }
    
    std::string toString() {
        return (std::to_string(age)+","+firstName+","+lastName+","+std::to_string(standard));
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    student st;
    st.setAge(age);
    st.setStandard(standard);
    st.setFirstName(first_name);
    st.setLastName(last_name);
    
    cout << st.getAge() << "\n";
    cout << st.getLastName() << ", " << st.getFirstName() << "\n";
    cout << st.getStandard() << "\n";
    cout << "\n";
    cout << st.toString();
    
    return 0;
}
