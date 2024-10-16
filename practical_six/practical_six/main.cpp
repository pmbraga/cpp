//
//  main.cpp
//  practical_six
//
//  Created by Pedro on 16/10/2024.
//

#include <iostream>

// 1

#define ASSERT(x) if ( !(x) )\
{\
std::cout << "Test " << #x << " failed at line " << __LINE__ << " in " << __FILE__ << std::endl;}

/* how could be improved: included in another file, indication that it worked as well as failed could be nice*/

// 1.1

#define POW2(i) 1 << 1

int main() {
    
    int a = 5;
    
    ASSERT(a == 5);
    
    int i = POW2(3);
    std::cout << i << std::endl;
    std::cout << POW2(8) << std::endl;
    
   
    return 0;
}
