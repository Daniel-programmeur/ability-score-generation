#include <iostream>
#include <ctime>
#include "util.h"



int main(){

int choice;

    srand((unsigned) time(NULL));

    std::cout << "how do you want to generate the ability scores of your character" << std::endl;

    std::cout << "1. The standard array, which is a standardized balanced set of ability scores" << std::endl;
    std::cout << "2. each ability score is calculated by throwing 4 dice and adding the highest 3 together" << std::endl;
    std::cout << "3. 24 dice are thrown and you put the highest 18 together as an ability score " << std::endl;

    std::cin >> choice;

    if (choice != 1 && choice != 2 && choice != 3)
    {
        std::cout << "im sorry, but that is not a supported choice" << std::endl;
    }
    
    switch (choice)
    {
    case 1:
        std::cout << "15, 14, 13, 12, 10, 8" << std::endl;        
        break;
    case 2:
        rolledstats();
        break;
    case 3:
        highest18of24();
        break;

    default:
        std::cout << "Please contact me, you shouldnt be able to get this" << std::endl;    
        break;
    }









return 0;
}
