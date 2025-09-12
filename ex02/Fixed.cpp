#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{
}

Fixed::Fixed(const int nb)
{
	this->fixed = nb << this->fixed_bits;
}

Fixed::Fixed(const float nb)
{
	this->fixed = roundf(nb * (1 << this->fixed_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

/*---------- methods --*/

float Fixed::toFloat(void) const
{
	return ((float)this->fixed / (1 << this->fixed_bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed >> this->fixed_bits);
}

/*---------- overloading --*/

Fixed &Fixed::operator=(const Fixed &other)
{
	if (&other != this)
		this->fixed = other.fixed;
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->fixed += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	old;

	old = *this;
	++(*this);
	return (old);
}

Fixed &Fixed::operator--()
{
	this->fixed -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	old;

	old = *this;
	--(*this);
	return (old);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->fixed > other.fixed);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->fixed < other.fixed);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->fixed >= other.fixed);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->fixed <= other.fixed);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->fixed == other.fixed);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->fixed != other.fixed);
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
    if (left > right)
        return (right);
    return (left);
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
    if (left > right)
        return (right);
    return (left);
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
    if (left > right)
        return (left);
    return (right);
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
    if (left > right)
        return (left);
    return (right);
}
