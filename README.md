# Triploit C++ String Library

Makes some things realy easy.

```cpp
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

std::cout << s << std::endl;

if (s.endsWith("world!") && s.startsWith("Good"))
    std::cout << "Good world!" << std::endl;
```
