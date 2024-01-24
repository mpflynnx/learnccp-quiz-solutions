#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	const bool leftbit{ bits.test(3) };

	bits <<= 1; // do left shift

	if (leftbit)
		bits.set(0);

	return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n'; // 0010

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n'; // 0011

	return 0;
}
