#include <iostream>
#include <stdexcept>
#include "include/tstring.hpp"

#define TEST(a, b) if (a != b) { std::cout << "\033[1;31mTESTING-ERROR:\033[00m " << a << " != " << b << std::endl; throw std::runtime_error("test failed. aborted."); } else { std::cout << "\033[1;32mTEST-SUCCESS:\033[00m " << a << " == " << b << std::endl; }
#define STR_TEST(a, b) TEST(a, std::string(b))

int main()
{
    tri::string s = 'H';
    STR_TEST(s, "H");

    s = s + "ello world";
    STR_TEST(s, "Hello world");

    s += '!';
    STR_TEST(s, "Hello world!");

    s = s.replace("Hello", "Good night,");
    STR_TEST(s, "Good night, world!");

    s = s.toUpper().split(',')[0]+"!";
    STR_TEST(s, "GOOD NIGHT!");

    s = s.substr(0, s.size() - 2)+", world!";
    TEST(s.equalsIgnoreCase("good night, world!"), true);

    if (s.endsWith("world!") && s.startsWith("Good"))
        std::cout << "Good world!" << std::endl;

    s = s.substr(0, 1);
    STR_TEST(s, "G");
}
