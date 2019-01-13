//
// Created by trist on 13.01.2019.
//

#include <iostream>
#include "tstring.hpp"

int main()
{
    tri::string s = 'H';
    
    std::cout << s << std::endl;

    s = s + "ello world";
    s += '!';

    std::cout << s << std::endl;

    s = s.replace("Hello", "Good night,");

    std::cout << s << std::endl;
    std::cout << s.toUpper().split(',')[0]+"!" << std::endl;

    if (s.equalsIgnoreCase("good night, world!"))
        std::cout << "ok" << std::endl;

    std::cout << s.endsWith("world!") << std::endl;
}