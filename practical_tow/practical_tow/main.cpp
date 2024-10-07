//
//  main.cpp
//  practical_tow
//
//  Created by Pedro on 07/10/2024.
//

#include <iostream>
#include <cmath>
#include <fstream> // library to use external files
#include <limits>

void problem_one(){
    
    float a;
    float b;
    float c;
    
    std::cout << "We will solve a quadractic equation of shape: ax^2 + bx + c = 0. \n";
        
    std::cout << "Provide a: \n";
    std::cin >> a;
        
    std::cout << "Provide b: \n";
    std::cin >> b;
        
    std::cout << "Provide c: \n";
    std::cin >> c;
        
    if (a == 0) { std::cout << "This is not a quadractic problem" << std::endl; }
        
    float delta = ( (std::pow(b, 2.0)) - (4 * a * c) );
        
    if (delta == 0) {
        float x = (-b/(2*a));
        std::cout << "This equation has two equal real solutions: " << x << std::endl;
    }
        
    else if ( delta < 0 ) { std::cout << "This equation has no real solutions."; }
        
    else {
        float xOne = ((- b + std::sqrt(delta)) / (2*a));
        float xTwo = ((- b - std::sqrt(delta)) / (2*a));
            
            std::cout << "This equation has two different real solutions: x_1 = " << xOne << " and x_2  = " << xTwo << std::endl;
            
        }
    
}

void problem_one_one() {
    
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
            
            float RealPart = (-b) / (2 * a);
            float ImaginaryPart = std::sqrt(-delta);
            
            if (b == 0) {std::cout << "The imaginary roots are: x_1 = " << ImaginaryPart << "i, and x_2 = -" << ImaginaryPart << "i" << std::endl; }
            else {
                std::cout << "This equation has two complex solutions: x_1 = " << RealPart << " + i" << ImaginaryPart << ", and x_2 = " << RealPart << " - i" << ImaginaryPart << std::endl;}
            
        }
        
        else {
            float xOne = ((- b + std::sqrt(delta)) / (2*a));
            float xTwo = ((- b - std::sqrt(delta)) / (2*a));
            
            std::cout << "This equation has two different real solutions: x_1 = " << xOne << " and x_2  = " << xTwo << std::endl;
            
        }
    
}

void problem_two() {
    
    int MaximumSquare;
    
    std::cout << "Please enter the maximum square: \n";
    std::cin >> MaximumSquare;
    
    if (MaximumSquare < 0) { std::cout << "Negative numbers are not allowed, please give another option: "; }
    std::cin >> MaximumSquare;
    
    for (int i = 0; i <= MaximumSquare; i++) { std::cout << i << " * " << i << " = " << std::pow(i, 2) << std::endl; }
    
}

void problem_two_info() {
    
    int MaximumSquare;
    
    std::cout << "Please enter the maximum square: \n";
    std::cin >> MaximumSquare;
    
    if (MaximumSquare < 0) { std::cout << "Negative numbers are not allowed, please give another option: "; }
    std::cin >> MaximumSquare;
    
    for (int i = 0; i <= MaximumSquare; i++) {
        
        std::cout << i << " * " << i << " = " << std::pow(i, 2) << std::endl;
        std::cout << "Binary representation of " << i << ": " << std::numeric_limits<int>::digits << std::endl;
        std::cout << "Is " << i << " signed? " << std::numeric_limits<int>::is_signed << std::endl;
        
    }
    
}

int problem_two_file(){
    
    // new file management bit
    std::ofstream outputFile("output.dat");
    if (!outputFile) { std::cout << "Error initiating the file";}
    
    // same as before
    int MaximumSquare;
    
    std::cout << "Please enter the maximum square: \n";
    std::cin >> MaximumSquare;
    
    if (MaximumSquare < 0) { std::cout << "Negative numbers are not allowed, please give another option: "; }
    std::cin >> MaximumSquare;
    
    for (int i = 0; i <= MaximumSquare; i++) {
        
        int input = i;
        int output = std::pow(i, 2);
        
        outputFile << input << "\t" << output << std::endl;
    }
    
    outputFile.close();
    std::cout << "Data has been written to output.dat." << std::endl;
    
    return 0;

}

int main() {
    
    problem_two_info();
    
    return 0;
}
