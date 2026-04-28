#include <iostream>

int main() {

    int edad;
    int peru;
    bool holi = true;

    holi = !holi    ;

    std::cout<<"Ingrese su edad: ";
    std::cin>>edad;
    std::cin>>peru;

    if (edad>=18 && holi) {
        std::cout<<"Usted es mayor de edad";
    } 
    else if (peru==67) {
        std::cout<<"six seven";
    } 
    else {
        std::cout<<"Usted es menor de edad";
    }
    

    return 0;
}