#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // Money-with-wings emoji, encoded as UTF-8 bytes for any compiler source encoding.
    std::cout << "\xF0\x9F\x92\xB8 HOLY FUCK YOURE GONNA GET FREE MONIESSS\n";
    int monies = 1;
    
    while (true) {
        std::cout << "\033[2J\033[1;1H";
        // Money-bag emoji.
        std::cout << "\xF0\x9F\x92\xB0 HOLY SHIT YOU ALREADY HAVE " << monies << " DOLLARYDOOS HOLY SHIT ISNT THIS CRAZY!!!!\n";
        monies *= 2;
        Sleep(1000);
    }
}

