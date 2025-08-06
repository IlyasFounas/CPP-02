#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) 
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = nb << this->fixed_bits;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed = roundf(nb * (1 << this->fixed_bits));  
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed / (1 << this->fixed_bits));
}

int Fixed::toInt(void) const
{
    return (this->fixed >> this->fixed_bits);
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignement operator called" << std::endl;
    if (&other != this) 
        this->fixed = other.fixed;
    return *this;
}
