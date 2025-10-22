#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "string"
#include "cmath"

class Fixed {
    public:

        /*_____constructors_____*/
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& copy);
        ~Fixed();

        /*_____overloading_____*/
        Fixed& operator=(const Fixed &other);
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        
        /*_____public_members_____*/
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed& min(Fixed &left, Fixed &right);
        static const Fixed& min(const Fixed &left, const Fixed &right);
        static Fixed& max(Fixed &left, Fixed &right);
        static const Fixed& max(const Fixed &left, const Fixed &right);



    private:
        int fixed;
        static const int fixed_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif