#include <iostream>
#include <string>
#include <sstream>
#include "Factory.h"

int main() {
    int choice;
    std::string inputString;
    int inputValue;

    T1* objT1 = nullptr;
    T2* objT2 = nullptr;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Create T1" << std::endl;
        std::cout << "2. Create T2" << std::endl;
        std::cout << "3. Delete T1" << std::endl;
        std::cout << "4. Delete T2" << std::endl;
        std::cout << "5. Show Value" << std::endl;
        std::cout << "6. Subtract T1 objects" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter string for T1: ";
            std::cin >> inputString;
            if (objT1 != nullptr) {
                Factory::DeleteT1(objT1);
            }
            objT1 = Factory::CreateT1(inputString);
            break;
        case 2:
            std::cout << "Enter integer value for T2: ";
            std::cin >> inputValue;
            if (objT2 != nullptr) {
                Factory::DeleteT2(objT2);
            }
            objT2 = Factory::CreateT2(inputValue);
            break;
        case 3:
            if (objT1 != nullptr) {
                Factory::DeleteT1(objT1);
                objT1 = nullptr;
            }
            break;
        case 4:
            if (objT2 != nullptr) {
                Factory::DeleteT2(objT2);
                objT2 = nullptr;
            }
            break;
        case 5:
            if (objT1 != nullptr) {
                objT1->ShowValue();
            }
            else if (objT2 != nullptr) {
                objT2->ShowValue();
            }
            else {
                std::cout << "No object created yet." << std::endl;
            }
            break;
        case 6:
            if (objT1 != nullptr) {

                T1* substr = Factory::CreateT1("World");
                T1 result = *objT1 - *substr;
                std::cout << "Result of subtraction: ";
                result.ShowValue();
                Factory::DeleteT1(substr);
            }
            else {
                std::cout << "T1 objects not created yet." << std::endl;
            }
            break;

        case 7:
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 7." << std::endl;
        }

        std::cout << std::endl;
    } while (choice != 7);


    if (objT1 != nullptr) {
        Factory::DeleteT1(objT1);
    }
    if (objT2 != nullptr) {
        Factory::DeleteT2(objT2);
    }

    return 0;
}
