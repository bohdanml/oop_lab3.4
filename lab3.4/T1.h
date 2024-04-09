#pragma once

#include <iostream>
#include <string>

class T1 {
private:
    std::string str;

public:
    T1(const std::string& s);

    T1 operator-(const T1& s) const;

    void ShowValue() const;
};