#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {

//ofstream outFile;

fstream outFile;

string outputFileName = "text.txt";
//outFile.open(outputFileName);
outFile.open(outputFileName, ios::out);

if(outFile.is_open()) {
        for(int i=1; i < 5; i++) {
                outFile << ". This is line." << endl;
        }
        outFile.close();
}
else {
        cout << "Could not create file: " << outputFileName << endl;
}

return 0;
}
