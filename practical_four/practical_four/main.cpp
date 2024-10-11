//
//  main.cpp
//  practical_four
//
//  Created by Pedro on 11/10/2024.
//

#include <iostream>
#include <array>

int sumIntegers(int a, int b) { return a + b; }

void decrease(int& a, int b) { a = a - b; } // reassigning variables passed by reference on purpuse does not require specifying the tyoe

int quadraticSolutions(double a, double b, double c, double& x1, double& x2 ) {
    
    if (a == 0) { return 1; }
    else {
        
        float delta = ( (std::pow(b, 2.0)) - (4 * a * c) );
        
        if (delta == 0) {
             x1 = (-b/(2*a));
             x2 = (-b/(2*a));
            
            return 1;
            
        }
        
        else if ( delta < 0 ) { return 0; }
        
        else {
             x1 = ((- b + std::sqrt(delta)) / (2*a));
             x2 = ((- b - std::sqrt(delta)) / (2*a));
            
            return 2;
            
        }
        
    }
    
}

std::array<int, 20> partialSum(const std::array<int, 20>& a) {
    
    std::array<int, 20> Out;
    
    for (int i = 0; i < 20; i++) {
        int x = 0;
        
        for (int j = 0; j <= i; j++) {
            x = x + a[j];
        }
        
        Out[i] = x;
        
    }
    
    return Out;
    
}

int determinant(const std::array<std::array<int, 3>, 3>& matrix) {
    
    int a = matrix[0][0];
    int b = matrix[0][1];
    int c = matrix[0][2];
    int d = matrix[1][0];
    int e = matrix[1][1];
    int f = matrix[1][2];
    int g = matrix[2][0];
    int h = matrix[2][1];
    int i = matrix[2][2];
    
    // Determinant formula for 3x3 matrix
    return a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    
}

std::array<int, 2> linearAlg(const std::array<std::array<int, 3>, 3>& matrix) {
    
    // trace:
    
    int trace = matrix[0][0] + matrix[1][1] + matrix[2][2];
    
    // determinant
    
    int det = determinant(matrix);
    
    std::array<int, 2> result = {det, trace};
    
    return result;
    
}

int main() {
    
    std::array< int, 3> rowOne = {1,2,12};
    std::array< int, 3> rowTwo = {4,23,6};
    std::array< int, 3> rowThree = {7,20,9};
    
    std::array< std::array< int, 3>, 3> testMatrix = {rowOne, rowTwo, rowThree};
    
    std::array<int, 2> Result = linearAlg(testMatrix);
    
    for (int i = 0; i < 2; i++) {std::cout << Result[i] << std::endl;}
    
}
