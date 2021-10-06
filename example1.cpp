#include <string>
#include <iostream>

class TestClass {       
  public:             
    int aNumber;        
    std::string aString;  
};

int main() {
    TestClass myTestClass;

    myTestClass.aNumber = 60;
    myTestClass.aString = "Owain";

    std::cout << myTestClass.aNumber << "\n";
    std::cout << myTestClass.aString << "\n";

    return(0);
}