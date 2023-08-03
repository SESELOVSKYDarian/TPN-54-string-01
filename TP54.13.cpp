// string::empty
#include <iostream>
#include <string>
int main ()
{
std::string content;
std::string line;
do {
std::cout << "Please introduce a text. Enter an empty line to finish:\n";
getline(std::cin,line);
content += line + '\n';
} while (!line.empty());
std::cout << "The text you introduced was:\n" << content;
return 0;
}