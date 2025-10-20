#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed {
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed& operator=(const Fixed &other);

        /*_____public_members_____*/
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int fixed;
        static const int fixed_bits = 8;
};

#endif