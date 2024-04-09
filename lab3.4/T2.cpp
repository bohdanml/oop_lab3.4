#include "T2.h"

T2::T2(int v) : value(v) {}

T2 T2::operator-(const T2& obj) const {
    return T2(this->value - obj.value);
}

void T2::ShowValue() const {
    std::cout << value << std::endl;
}
