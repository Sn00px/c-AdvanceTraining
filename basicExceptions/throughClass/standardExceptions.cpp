#include <iostream>
using namespace std;

class CanGoWrong {
public:
CanGoWrong() {
        char *pMemeory = new char[99999999999999999999999];
        delete [] pMemeory;
}
};

int main(int argc, char const *argv[]) {
        try{
                CanGoWrong wrong;
        }
        catch(bad_alloc &e) {
                cout << "Caught an exception: "<< e.what() << endl;
        }

        cout << "Still running..." << endl;
        return 0;
}
