#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"
#include "string"

class Fixed {
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
    
    private:
        int fixed;
        static const int fixed_bits = 8;
};

#endif