#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <algorithm>
#include "util.h"


int numbers [4] = {0, 0, 0, 0};
int endnumbers [6] = {15, 14, 13, 12, 10, 8};
int selfsort [24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



double remainder (double number, double oprtr)
{ 
    int div = number/oprtr;
    double rem  = number - oprtr*div;
    return rem;
}

int dice ()
{

    int final;

    for (int a = 0; a < 4; a++)
    {
        numbers [a] = 1 + rand() % 6 ;
    }




    std::sort(numbers, numbers +4);

    final = numbers[1]+numbers[2]+numbers[3];



    return final;
}

void rolledstats ()
{


    for (int a = 0; a < 6; a++)
    {
        endnumbers [a] = dice() ;
    }

    for (int b = 0; b < 6; b++)
    {
        std::cout << endnumbers [b];

        if (b!=5)
        {
            std::cout << ", ";
        }

    }


}

void highest18of24()
{


    for (int a = 0; a < 24; a++)
    {

        selfsort [a] = 1 + rand() % 6 ;

    }

        std::sort(selfsort, selfsort +24, std::greater <int>());

    for (int b = 0; b < 18; b++)
    {
        std::cout << selfsort [b];

        if (b!=17)
        {
            std::cout << ", ";
        }

    }

}





void test ()
{
    double  firstn;
    double secondn;

    std::cin >> firstn;
    std::cout << "number:" << firstn;
}

void randomtest ()
{

    std::cout << rand();
    std::cout << rand();
    std::cout << rand();
    std::cout << rand();

    /*
    numbers [0] =9;
    numbers [1] =8;
    numbers [2] =7;
    numbers [3] =8;
    */

}