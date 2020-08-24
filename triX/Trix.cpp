#include<iostream>

int main(){


    //ints
    const int IntA = 1;
    const int IntB = 2;
    const int IntC = 3;
    //opperations
    const int IntSum = IntA + IntB + IntC;
    const int IntProduct = IntA * IntB * IntC;


    // Print intro
    std::cout << "You're a hacker breaking into a secure server from within an enemy base." << std::endl;
    std::cout << "You need to enter the correct passwords to bypass the enemy security systems..." << std::endl << std::endl;
    // Print dialog
    std::cout << "+ There are three digits in the numeric password." << std::endl;
    std::cout << "+ The digits add up to be: " << IntSum << std::endl;
    std::cout << "+ The digits multiply to be: " << IntProduct << std::endl << std::endl;
    // Get input
    int PlayerIntput;
    std::cout << "Input Solution: ";
    std::cin >> PlayerIntput;
    // Return Intput
    std::cout << "You input: " << PlayerIntput;


    // fin
    return 0;


}