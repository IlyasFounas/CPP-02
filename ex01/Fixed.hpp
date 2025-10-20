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
        Fixed& operator=(const Fixed &other);

        /*_____public_members_____*/
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        
    private:
        int fixed;
        static const int fixed_bits = 8;
    };
    
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif