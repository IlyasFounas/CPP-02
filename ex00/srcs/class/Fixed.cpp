#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::Fixed(int nb)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = nb;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    // todo
}

Fixed& Fixed::operator=(const Fixed &other) {
    if (&other != this) 
        this->fixed = other.fixed;
    return *this;
}