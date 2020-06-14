//
//  Calculator.cpp
//  Gpa
//
//  Created by Afaq Ahmed on 28/02/2020.
//  Copyright © 2020 Afaq Ahmed. All rights reserved.
//

#include "Calculator.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>

void Calculator:: getData()
{ system("clear");
    
    std::cout << "Enter the number of total subjects: "; std::cin >> sNsz;
    for ( i = 0 ; i < sNsz ; i++) {
        if( i> 0 )
            displayData();
        std::cout << "---------------------------------------------------"<<std::endl;
        std::cout << "Enter Subject Name"<< i+1<<": "; std::cin >> subName[i].subjectName;
        std::cout << "Enter " << subName[i].subjectName << " Credit hours: "; std::cin >> credHr;
        std::cout << "Enter " << subName[i].subjectName << " Marks: "; std::cin >> marks;
        if (credHr == 1 && marks <= 16 && marks >= 8)
            qP[i] = quaPoints.creditHour1[marks-8];
        else if( credHr == 1 && marks > 16)
            qP[i] = 4.00;
        else if (credHr == 2 && marks <= 32 && marks >= 16)
            qP[i] = quaPoints.creditHour2[marks-16];
        else if( credHr == 2 && marks > 32)
            qP[i] = 8.00;
        else if (credHr == 3 && marks <= 48 && marks >= 24)
            qP[i] = quaPoints.creditHour3[marks-24];
        else if( credHr == 3 && marks > 48)
            qP[i] = 12.00;
        else if (credHr == 4 && marks <= 64 && marks >= 32)
            qP[i] = quaPoints.creditHour4[marks-32];
        else if( credHr == 4 && marks > 64)
            qP[i] = 16.00;
        totalcredHour += credHr;
        totalQualityPoint += qP[i];
        system("clear"); // For windows use system("CLS")
    }
}

//MARK: - DisplayData Class

void Calculator:: displayData()
{
    std::cout << std::left << "\nDetails" << std::endl ;
    std::cout << "---------------------------------------------------"<<std::endl;
    std::cout << std::setw(30) << std::left << "Subject Name" << std::setw(20)
    << std::right << "Quality Points" << std::endl ;
    for (int j = 0 ; j < i ; j++ ) {
        std::cout << std::setw(30) << std::left << subName[j].subjectName << std::setw(20)
             << std::right << qP[j] << std::endl;
    }
    std::cout << "---------------------------------------------------"<<std::endl;
    std::cout << std::setw(30) << std::left << "Total GPA" << std::setw(20)
    << std::right << totalQualityPoint/totalcredHour << std::endl ;
}
Quadratic:: Quadratic(int xsquare_val, int x_val, int cons_val)
: xsquare{xsquare_val}, x{x_val}, cons{cons_val} {
    int t1 = pow(x, 2);
    int t2 = (t1 - (4*xsquare*cons));
    int t3 = 0;
    float t8;
    float t9 = (2*xsquare);
    if( t2 > 0){
        t3 = sqrt(t2);
        t8 = ( x + t3 );
        x_values1 = t8 / t9;
        std:: cout << "X = "<<  x_values1;
    }else
    {
        std::cout <<"X = " << x << " + √" << t2 << "/" << t9 ;
    }
        
        int t4 = pow(x, 2);
        int t5 = (t4- (4*xsquare*cons));
        int t6;
        float t7;
        float t10 =(2*xsquare);
        if ( t5 > 0)
        {
        t6 = sqrt(t5);
        t7 = (x - t6);
        x_values2 = t7/ t10;
        std:: cout << ", "<<  x_values2 << std::endl;
        }else{
        std::cout <<", " <<  x << " - √" << t5 << "/" << t10 << std::endl;;
        }
}
