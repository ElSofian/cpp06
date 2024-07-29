#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class ScalarConverter {
	private:
		const std::string _value;
	
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &src);

		static void convert(std::string str);

		class ImpossibleException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The conversion is impossible.");
				}
		};

		class NonDisplayableException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The result is non displayable.");
				}
		};
};

#endif