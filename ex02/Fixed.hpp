#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "string"
#include "cmath"

class Fixed {
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed& copy);
        ~Fixed();

        /*---------- methods --*/
        float toFloat(void) const;
        int toInt(void) const;
        
        /*---------- overloading --*/
        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
        Fixed& operator=(const Fixed &other);


        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        
        Fixed& operator++();    // ++a
        Fixed operator++(int);  // a++
        Fixed& operator--();    // --a
        Fixed operator--(int);  // a--

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        static Fixed& min(Fixed &left, Fixed &right);
        static const Fixed& min(const Fixed &left, const Fixed &right);
        static Fixed& max(Fixed &left, Fixed &right);
        static const Fixed& max(const Fixed &left, const Fixed &right);



    private:
        int fixed;
        static const int fixed_bits = 8;
};

#endif