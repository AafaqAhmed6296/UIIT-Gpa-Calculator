//
//  Calculator.hpp
//  Gpa
//
//  Created by Afaq Ahmed on 28/02/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#ifndef Calculator_h
#define Calculator_h
#include <iostream>
#include <stdio.h>
class Calculator
{
private:
    struct QualityPoints
    {
        float creditHour1[9] = {1.00,1.50,2.00,2.30,2.70,3.00,3,30,3.70};
        float creditHour2[17] = {2.00,2.60,3.00,3.60,4.00,4.40,4.60,5.00,5.40,5.60,6.00,
                                 6.40,6.60,7.00,7.40,7.60,8.00
            
        };
        float creditHour3[25] = {3.00,3.60,3.90,4.50,5.10,5.40,6.00,6.30,6.60,6.90,7.20,
                                 7.50,8.10,8.40,8.70,9.00,9.30,9.60,9.90,10.20,10.50,11.10,
                                 11.40,11.70,12.00
        };
        float creditHour4[33] = {4.00,4.40,5.20,5.60,6.00,6.40,7.20,7.60,8.00,8.40,8.80,
                                 8.80,9.20,9.60,10.00,10.40,10.80,10.80,11.20,11.60,12.00,
                                 12.00,12.40,12.80,13.20,13.60,14.00,14.40,14.80,14.80,
                                 15.20,15.60,16.00
            
        };
        float creditHour5[80];
    };
    struct SNames{
    char subjectName[20];
        
    };
    QualityPoints quaPoints; // variable made from struct Quality points
    SNames subName[6];  
    unsigned short int sNsz, credHr, marks;
    float totalcredHour = 0.0, totalQualityPoint = 0.0;
    float qP[6];
    int i;
public:
    // methods
    void displayData();
    void getData();
    
};
class Quadratic{
private:
    int xsquare;
    int x;
    int cons;
    double x_values1;
    double x_values2;
public:
    //Constructor
    Quadratic(int xsquare_val, int x_val, int cons_val);
    //Destructor 
    ~Quadratic(){}
};
#endif /* Calculator_hpp */


