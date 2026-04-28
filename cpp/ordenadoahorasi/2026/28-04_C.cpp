#include <iostream>
#include <cmath>

int main() {
    
    double a;
    double b;
    double c;

    std::cout<<"Ingrese el lado a: ";
    std::cin>>a;

    std::cout<<"Ingrese el lado b: ";
    std::cin>>b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout<<"C: "<<c;

    return 0;
}