#include <iostream>
#include <string>

class C {
private:
    std::string C1;
    int C2;

public:
    std::string getC1() { return C1; }
    void setC1(std::string c1) { C1 = c1; }

    int getC2() { return C2; }
    void setC2(int c2) { C2 = c2; }

    void MC1() {
        std::cout << "Metodo MC1" << std::endl;
    }

    void MC2() {
        std::cout << "Metodo MC2" << std::endl;
    }
};