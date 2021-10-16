#include <iostream>

using namespace std;

struct Person {
    char name[50];
    int age;
    double weight;
};

int main() {
    cout << sizeof(Person) << endl;


    return 0;
}
