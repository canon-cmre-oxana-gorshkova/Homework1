#include <iostream>
#include "TemplateClass.h"

template <typename T, typename U>
TemplateClass<T,U>::TemplateClass(T memberOne, U memberTwo) {
        this->memberOne = memberOne;
        this->memberTwo = memberTwo;
    }

template <typename T, typename U>
TemplateClass<T,U> TemplateClass<T,U>::operator+(const TemplateClass& other) {
        auto newMemberOne = this->memberOne + other.memberOne;
        auto newMemberTwo = this->memberTwo + other.memberTwo;
        TemplateClass result(newMemberOne, newMemberTwo);
        return result;
}

template <typename T, typename U>
    void TemplateClass<T,U>::print() {
        std::cout << "Member one: " << memberOne << std::endl;
        std::cout << "Member two: " << memberTwo << std::endl;
    }
