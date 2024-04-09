#include "T1.h"

T1::T1(const std::string& s) : str(s) {}

T1 T1::operator-(const T1& s) const {
    std::string temp = str;
    size_t pos = temp.find(s.str);
    if (pos != std::string::npos) {
        temp.erase(pos, s.str.length());
        return T1(temp);
    }
    else {
        return *this;
    }
}

void T1::ShowValue() const {
    std::cout << str << std::endl;
}