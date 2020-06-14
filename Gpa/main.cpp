//
//  main.cpp
//  Gpa
//
//  Created by Afaq Ahmed on 28/02/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Calculator.h"

int main(){
    Calculator cals;
    
    char c = 'a';
    do {
    cals.getData();
    cals.displayData();
        std:: cout << "Calculate again ? y/n: " << std:: endl; std:: cin >> c;
    }while (c == 'y');
    //Quadratic eq(2,2,-2);
    return 0;
}
