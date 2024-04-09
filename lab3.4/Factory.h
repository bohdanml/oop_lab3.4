#pragma once

#include "T1.h"
#include "T2.h"

class Factory {
public:
    static T1* CreateT1(const std::string& s);

    static T2* CreateT2(int v);

    static void DeleteT1(T1* ptr);

    static void DeleteT2(T2* ptr);
};
