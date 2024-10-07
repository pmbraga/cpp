//
//  main.cpp
//  practical_one
//
//  Created by Pedro on 04/10/2024.
//

#include <iostream>
using namespace std;

int main(void)
{

    signed int s = 0;
    for(unsigned int i = 0 ; i < 10 ; i++)
;
    {
        for(unsigned int j=0 ; j < 1048576 ; j++)
        {
            s += 1024;
        }
        cout << "s = " << s << endl;
    }
    return 0;
}
