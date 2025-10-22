#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    float value = obj.toFloat();
    os << value;
    return os;
}

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl;

	/*_____A TESTS_____*/
	std::cout << "a tests : " << std::endl << "a is equal : " << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a is equal : " << a << std::endl << std::endl;

	/*_____B TESTS_____*/
	std::cout << "b tests : " << std::endl << "b is equal : " << b << std::endl;
	std::cout << "the max between a and b is : " << Fixed::max(a, b) << std::endl << std::endl;

	/*_____LITTLE_BIT_OF_MORE_TESTS_____*/
	Fixed tests;

	tests = Fixed(15.256f);
	tests = tests / b;
	std::cout << "tests : " << std::endl << "tests is equal : " << tests << std::endl;
	std::cout << "the min between a and tests is " << Fixed::min(a,tests) << std::endl;
	return (0);
}
