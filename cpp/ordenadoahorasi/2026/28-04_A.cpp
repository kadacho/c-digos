#include <iostream>

int main() {
    
    std::string nombre;
    std::string edad;

    std::cout<<"Ingrese su edad: ";
    std::getline(std::cin>>std::ws, edad);
    
    std::cout<<"Ingrese su nombre completo: ";
    std::getline(std::cin>>std::ws, nombre);

    std::cout<<"Hola "<<nombre<<std::endl;
    std::cout<<"Su edad es: "<<edad;

    return 0;
}