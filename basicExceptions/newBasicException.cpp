#include <iostream>
using namespace std;

void creatingError() {
        throw "Here is an error!";
}

int main() {

        try{
                creatingError();
        }
        catch(char const* e) {
                cout << "I am catching an error here, which is: " << e << endl;
        }
        catch(string& e) {
                cout << "I am catching an error here, which is: " << e << endl;
        }

        cout << "Error is exiting from the error message loop and still running.";

        return 0;
}
