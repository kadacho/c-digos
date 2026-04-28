#include <iostream>
#include <cmath>

int main() {
    
    double x=8.6;
    double y=4;
    double z;

    z = std::max(x,y);
    std::cout<<"max: "<<z<<std::endl;
    z = std::min(x,y);
    std::cout<<"min: "<<z<<std::endl;
    z = std::pow(2, 4);
    std::cout<<"pow: "<<z<<std::endl;
    z = std::sqrt(4);
    std::cout<<"sqrt: "<<z<<std::endl;
    z = std::abs(-3);
    std::cout<<"abs: "<<z<<std::endl;
    z = std::round(555.5);
    std::cout<<"round: "<<z<<std::endl;
    z = std::round(3.49);
    std::cout<<"otro round xdd: "<<z<<std::endl;
    z = std::abs(-3);
    std::cout<<"abs: "<<z<<std::endl;
    z = std::ceil(x);
    std::cout<<"ceil: "<<z<<std::endl;
    z = std::floor(x);
    std::cout<<"floor: "<<z<<std::endl;

    return 0;
}