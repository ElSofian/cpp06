# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy): _value(copy._value) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
    (void)src;
    return (*this);
}

void ScalarConverter::convert(std::string literal)
{
    // Char conversion
    try {
        char charValue = static_cast<char>(std::stoi(literal));
        if (std::isprint(charValue))
            std::cout << "char: " << charValue << std::endl;
        else
            std::cout << "Cannot convert to char : the value is not printable." << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Cannot convert to char : invalid input." << std::endl;
    }

    // Int conversion
    try {
        int intValue = static_cast<int>(std::stoi(literal));
        std::cout << "int : " << intValue << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Cannot convert to int : invalid input." << std::endl;
    }

    // Float conversion
    try {
        float floatValue = static_cast<float>(std::stof(literal));
        std::cout << "float: " << floatValue << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Cannot convert to float : invalid input." << std::endl;
    }

    // Double conversion
    try {
        double doubleValue = static_cast<double>(std::stod(literal));
        std::cout << "double: " << doubleValue << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Cannot convert to double : invalid input." << std::endl;
    }
}