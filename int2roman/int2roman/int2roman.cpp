// int2roman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
#I      1
#V      5
#X      10
#L      50
#C      100
#D      500
#M      1000
*/

#include <iostream>
#include <string>
#include <vector>

class roman {
    public:
        std::string int2rom(int count);
};

std::string roman::int2rom(int count) {
    std::vector<int> cnt = {           1,   4,  5,   9, 10,  40, 50,  90,100, 400,500, 900,1000 };
    std::vector<std::string> rom = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };

    std::string str;
    for (int i=cnt.size()-1; count; --i){
        int div = count / cnt[i];
        count %= cnt[i];
        for (int j = 0; j < div; ++j) str += rom[i];
    }
    return str;
}

int main()
{
    roman rom;
    int count = 3549;
    std::cout << count << " is " << rom.int2rom(count) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
