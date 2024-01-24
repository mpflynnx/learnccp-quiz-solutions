#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };    // hex for 0000 0001
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };    // hex for 0000 0010
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 }; // hex for 0000 0100
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };    // hex for 0000 1000
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };   // hex for 0001 0000

    std::uint8_t myArticleFlags{ option_favorited }; // 0000 0100

    // Place all lines of code for the following quiz here

    // a)
    // To set (turn on) a bit (to value 1), we use bitwise OR equals (operator |=) in conjunction 
    // with the bit mask for the appropriate bit:

    myArticleFlags |= option_viewed; // turn on bit 0
    std::cout << "option_viewed is " << (static_cast<bool>(myArticleFlags & option_viewed) ? "on\n" : "off\n");
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // b)
    // To determine if a bit is on or off, we use bitwise AND in conjunction with the bit mask 
    // for the appropriate bit:

    std::cout << "option_deleted is " << (static_cast<bool>(myArticleFlags & option_deleted) ? "on\n" : "off\n");
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // c)
    // Add a line of code to clear the article as a favorite. Expected output 00000001:
    // To reset (clear) a bit (to value 0), we use Bitwise AND and Bitwise NOT together:

    myArticleFlags &= ~option_favorited; // turn off bit 0
    std::cout << "option_favorited is " << (static_cast<bool>(myArticleFlags & option_favorited) ? "on\n" : "off\n");

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // d)

    // set options
    myArticleFlags |= option_shared;
    myArticleFlags |= option_deleted;
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // d) Extra credit: why are the following two lines identical?

    //clear options
    myArticleFlags &= ~(option_shared | option_deleted); // turn option_shared and option_deleted off
    
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    // set options
    myArticleFlags |= option_shared;
    myArticleFlags |= option_deleted;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    //clear options
    myArticleFlags &= ~option_shared & ~option_deleted; // turn option_shared and option_deleted off

    // De Morgan’s laws says that if we distribute a NOT, we need to flip ORs and ANDs to the other.

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
