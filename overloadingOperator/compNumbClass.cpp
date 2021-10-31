#include "compNumbClass.h"
#include <iostream>

using namespace std;

namespace dzrnic {

ostream &operator<<(ostream &out, const Complex &c) {
  out << "(" << c.getReal() << ", " << c.getImaginary() << ")";
  return out;
}

Complex::Complex(): real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex &other) {
  //cout << "Copy" << endl;
  real = other.real;
  imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other) {
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}


}

using namespace dzrnic;

int main(int argc, char const *argv[]) {
  Complex c1(2, 3);
  Complex c2(c1);

  Complex c3 = c2;

  c3=c2;

  cout << c1 << endl;
  cout << c2 << ": " << c3 << endl;

  return 0;
}
