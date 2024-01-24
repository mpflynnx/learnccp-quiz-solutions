#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits)
{
	// bits << 1 does the left shift
	// bits >> 3 handle the rotation of the leftmost bit
														   // 0011 START

	std::cout << bits << " << 1: " << (bits << 1) << '\n'; // 0010 OR
	std::cout << bits << " >> 3: " << (bits >> 3) << '\n'; // 0001
													       // ----
	                                                       // 0011
	return (bits << 1) | (bits >> 3);
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n'; // 0010

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n'; // 0011

	return 0;
}
