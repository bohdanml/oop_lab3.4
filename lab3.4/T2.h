#pragma once

#include <iostream>

class T2 {
private:
    int value;

public:
    T2(int v);

    T2 operator-(const T2& obj) const;

    void ShowValue() const;
};