#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[]) {
  map<string, int> ages;

  ages["Mike"] = 40;
  ages["Raj"] = 20;
  ages["Vicky"] = 30;

  ages["Mike"] = 70;

  cout << ages["Raj"] << endl;

  cout << ages["Sue"] << endl;

  if(ages.find("Vicky") != ages.end()) {
    cout << "Found Vicky" << endl;
  }
  else {
    std::cout << "Key not found!" << '\n';
  }

  for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
      cout << it->first << ": " << it->second << endl;
  }

  for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
      pair<string, int> age = *it;

      std::cout << age.first << ": " << age.second << '\n';
  }
  return 0;
}
