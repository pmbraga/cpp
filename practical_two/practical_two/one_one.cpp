//
//  one_one.cpp
//  practical_two
//
//  Created by Pedro on 07/10/2024.
//


#include <iostream>
#include <cmath>

int main() {
    
    std::cout << "We will solve a quadractic equation of shape: ax^2 + bx + c = 0. \n";
    
    float a, b, c;
    
    std::cout << "Provide a: \n";
    std::cin >> a;
    
    std::cout << "Provide b: \n";
    std::cin >> b;
    
    std::cout << "Provide c: \n";
    std::cin >> c;
    
    if (a == 0) { std::cout << "This is not a quadractic problem" << std::endl; }
    
    float delta = ( (std::pow(b, 2.0)) - (4 * a * c) );
    std::cout << delta << std::endl;
    
    if (delta == 0) {
        float x = (-b/(2*a));
        std::cout << "This equation has two equal real solutions: " << x << std::endl;
    }
    
    else if ( delta < 0 ) { // right now, to avoid using external libraries, lets just use sqrt(-1) = i and divide the discriminant
        
        float RealPart = (-b) / (2 * a)
        float ImaginaryPart = std::sqrt(-(std::pow(b, 2.0)) - (4 * a * c)) / (2 * a)
        
        std::cout << "This equation has two complex solutions: x_1 = " << RealPart << " + i" << ImaginaryPart << ", and x_2 = " << RealPart << " - i" << ImaginaryPart << std::endl;
        
    }
    
    else {
        float xOne = ((- b + std::sqrt(delta)) / (2*a));
        float xTwo = ((- b - std::sqrt(delta)) / (2*a));
        
        std::cout << "This equation has two different real solutions: x_1 = " << xOne << " and x_2  = " << xTwo << std::endl;
        
    }
    

}
