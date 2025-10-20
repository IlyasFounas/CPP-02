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
	std::cout << "a tests : " << std::endl << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl << std::endl;

	/*_____B TESTS_____*/
	std::cout << "b tests : " << std::endl << b << std::endl;
	std::cout << "the max is : " << Fixed::max(a, b) << std::endl;
	return (0);
}