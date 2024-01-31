#ifndef CONSTANTS_H
#define CONSTANTS_H

//source:
// https://www.learncpp.com/cpp-tutorial/sharing-global-constants-across-multiple-files-using-inline-variables/
// 
// C++17 and above
// 
// define your own namespace to hold constants
namespace constants
{
    inline constexpr int max_class_size{ 35 }; // note: // remove inline keyword if not C++17 capable
    // ... other related constants
}
#endif