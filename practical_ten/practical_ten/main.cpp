//
//  main.cpp
//  practical_ten
//
//  Created by Pedro on 25/10/2024.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>

void VectorSorting() {
    
    std::vector<float> MyVector;
    float MyVal = 0;
    
    std::cout << "Please enter a list of positive numbers, ending with a negative one:" << std::endl;
    
    while (MyVal != -1) {
        std::cin >> MyVal;
        MyVector.push_back(MyVal);
    }
    
    std::sort(MyVector.begin(), MyVector.end());
    
    
    for (int i = 0; i < MyVector.size(); i++) {
        if ( i % 2 != 0 ) {
            std::cout << MyVector[i] << std::endl;
        }
    }
    
}

void ListSorting() {

}

void TelephoneDirectory() {
    
    // introduce profiles: ask for name, followed by number, repeat
    // if name is empty, move up to look up function
    // after printing name + phone for look up, ask if they want to list directory or add more
    // if list directory -> print names
    // if add more -> return to introduce profiles
    
    std::map<std::string, std::string> MyDirectory;
    std::string name;
    std::string phone;
    
    std::cout << "Please introduce profiles" << std::endl;
    std::cout << "Name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Phone: ";
    std::getline(std::cin, phone);
    
    while (!name.empty()){
        
        std::cout << "Name: ";
        std::getline(std::cin, name);
        std::cout << "Phone: ";
        std::getline(std::cin, phone);
        
        MyDirectory[name] = phone;
        
    }
    
}

int main() {
    
    TelephoneDirectory();

}
