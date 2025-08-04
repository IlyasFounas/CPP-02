#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {}

Fixed::Fixed(const int nb) 
{
    this->fixed = nb << this->fixed_bits;
}

Fixed::Fixed(const float nb)
{
    this->fixed = nb;
}
