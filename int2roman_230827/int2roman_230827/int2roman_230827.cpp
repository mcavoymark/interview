// int2roman_230827.cpp : Defines the entry point for the application.
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

#include "int2roman_230827.h"

class Int2rom {
	public:
		std::string int2rom(int num);
};

std::string Int2rom::int2rom(int num) {
	std::vector<std::string> rom = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	std::vector<int> cnt = {          1,   4,   5,   9, 10, 40, 50,  90, 100,400, 500,900, 1000 };

	std::string str;
	for (int i = rom.size() - 1; num > 0; --i) {
		for (int j = 0; j < num / cnt[i]; ++j) str += rom[i];
		num %= cnt[i];
	}
	return str;
};

//using namespace std;

int main()
{
	Int2rom ir;

	//int num = 3549;
	//std::cout << num << " is " << ir.int2rom(num) << std::endl;

	std::string str;
	while (std::getline(std::cin, str)) {
		int num = std::stoi(str);
		std::cout << num << " is " << ir.int2rom(num) << std::endl;
	}

	return 0;
}
