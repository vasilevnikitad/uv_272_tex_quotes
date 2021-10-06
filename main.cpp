#include <iostream>

int main() {
    bool left_quote{true};
    for (std::string str; std::getline(std::cin, str);) {
        for (std::size_t i{}; i < str.size(); ++i) {
            if (str[i] != '\"')
                std::cout << str[i];
            else {
                std::cout << (left_quote ? "``" : "\'\'");
                left_quote = !left_quote;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
