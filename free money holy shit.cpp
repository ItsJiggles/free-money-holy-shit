#include <iostream>
#include <Windows.h>

int main()
{
    std::cout << "HOLY FUCK YOURE GONNA GET FREE MONIESSS\n";
    int monies = 1;
    
    while (true) {
        std::cout << "\033[2J\033[1;1H";
        std::cout << "HOLY SHIT YOU ALREADY HAVE " << monies << " DOLLARYDOOS HOLY SHIT ISNT THIS CRAZY!!!!\n";
        monies *= 2;
        Sleep(1000);
    }
}

