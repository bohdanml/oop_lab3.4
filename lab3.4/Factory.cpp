#include "Factory.h"

T1* Factory::CreateT1(const std::string& s) {
    return new T1(s);
}

T2* Factory::CreateT2(int v) {
    return new T2(v);
}

void Factory::DeleteT1(T1* ptr) {
    delete ptr;
}

void Factory::DeleteT2(T2* ptr) {
    delete ptr;
}