#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl << std::endl;

	std::cout << "[   TESTS ON C   ]" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	c.setRawBits(145);
	std::cout << c.getRawBits() << std::endl;
	return (0);
}