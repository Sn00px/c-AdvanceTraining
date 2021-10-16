#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {

        string inFileName = "text.txt";

        ifstream inFile;

        //fstream inFile;

        inFile.open(inFileName);

        if(inFile.is_open()) {
                string line;

                cout << "Entered in the file." << endl;

                while(inFile) {
                        getline(inFile, line);
                        cout << line << endl;
                }

                inFile.close();
        } else {
                cout << "Cannot open file: " << inFileName << endl;
        }
        return 0;
}
