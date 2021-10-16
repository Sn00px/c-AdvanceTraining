#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public:
virtual const char* what() const throw() {
        return "Something bad happend!";
}
};

class Test {
public:
void goesWrong() {
        throw MyException();
}
};

int main(int argc, char const *argv[]) {

        Test test;

        try {
                test.goesWrong();
        }
        catch(MyException &e) {
                cout << e.what() << endl;
        }
        return 0;
}
