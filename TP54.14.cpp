#include <iostream>
#include <string>
int main ()
{
    std::string str("This is an example sentence.");
    std::cout << str << '\n'; // "This is an example sentence."

    str.erase(10, 8); // Erase 8 characters starting from index 10 (inclusive)
    std::cout << str << '\n'; // "This is an sentence."

    str.erase(str.begin() + 9); // Erase the character at index 9
    std::cout << str << '\n'; // "This is a sentence."

    str.erase(str.begin() + 5, str.end() - 9); // Erase characters from index 5 to (end - 9) 
    std::cout << str << '\n'; // "This sentence."

    return 0;
}
