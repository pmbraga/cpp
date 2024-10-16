//
//  main.cpp
//  practical_five
//
//  Created by Pedro on 14/10/2024.
//

#include <iostream>

/* Part 1 */

void calcNextRow(const int* prevRow, int* nextRow, int rowNo) {
    
    nextRow[0] = 1; // the first element of any row is one
    
    for (int i = 1; i < rowNo-1 ; i++) {
        
        nextRow[i] = prevRow[i] + prevRow[i-1]; // we are not defining the prevRow here, just saying what this function will do with the data from it
    }
    
    nextRow[rowNo-1] = 1; // the last element of any row is 1
    
}

void PascalTriangle(int rowNo) {
    
    // creates pointers to spaces in memory that have the size of the largest row of the triangle we can have, such that all rows before that can be stored in there, and re-assigned after each iteration
    
    int* row1 = new int[rowNo]; // empty row
    int* row2 = new int[rowNo]; // empty row
    
    // loop over every row number until we get to the final one we want
    
    for (int i = 1; i < rowNo+1; i++) {
        calcNextRow(row1, row2, rowNo); // starts populating the empty rows we created
        for (int j = 0; j < i ; j++) { std::cout << row2[j] << " ";} // prints all the elements from the row we just created
        std::cout << std::endl;
        
        // not completely clear exactly how the swaps work
        
        int* tmp = row1;
        row1=row2;
        row2=tmp;
        
    }
    
    delete[] row1;
    delete[] row2;
    
}

/* Part 2 */

int** allocateMatrix(int N) {
    
    
    
    
    return 0;
    
}

int main() {
    
    PascalTriangle(5);
    
}
