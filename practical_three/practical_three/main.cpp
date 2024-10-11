//
//  main.cpp
//  practical_three
//
//  Created by Pedro on 09/10/2024.
//

#include <iostream>
#include <fstream>

void Euler() {
    
    int finalT;
    double yZero;
    double step;
    
    std::cout << "Provide the following variables: \n";
    std::cout << "Step: \n";
    std::cin >> step;
    std::cout << "Final T: \n";
    std::cin >> finalT;
    std::cout << "Initial value of y: \n";
    std::cin >> yZero;
    
    std::vector<double> y;
    int totalIterations = finalT/step;
    
    std::ofstream output("/Users/pedrobraga/Documents/Cambridge/cpp/practical_three/output_euler.txt");
    
    y.push_back(yZero);
    
    // using for loop as the number of steps is known:
    
    for (int i = 1; i < totalIterations; i++) {
        
        double value;
        
        value = y[i-1] + step * std::sqrt(y[i-1]);
        y.push_back(value);
        
        output << i << ";" << value << std::endl;
        
    }
    
}

double f(double x) {
    
    return std::sqrt(x);
    
}

void RungeKutta() {
    
    int finalT;
    double yZero;
    double step;
    
    std::cout << "Provide the following variables: \n";
    std::cout << "Step: \n";
    std::cin >> step;
    std::cout << "Final T: \n";
    std::cin >> finalT;
    std::cout << "Initial value of y: \n";
    std::cin >> yZero;
    
    std::vector<double> y;
    int totalIterations = finalT/step;
    
    std::ofstream output("/Users/pedrobraga/Documents/Cambridge/cpp/practical_three/output_rungekutta.txt");
    
    y.push_back(yZero);
    
    for (int i = 1; i < totalIterations; i++) {
        
        double value;
        
        double k1 = f(y[i-1]);
        double k2 = f(y[i-1] + f(y[i-1]*step));
        
        value = y[i-1] + 0.5 * step * (k1 + k2);
        
        y.push_back(value);
        
        output << i << ";" << value << std::endl;
        
    }
    
}

int main() {

    Euler();
    
    return 0;
}
