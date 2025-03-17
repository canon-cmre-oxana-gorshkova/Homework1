#pragma once

template <typename T, typename U> class TemplateClass {
public:
    TemplateClass(T memberOne, U memberTwo);
    
    TemplateClass operator+(const TemplateClass& other);

    void print();
    
private:
    T memberOne;
    U memberTwo;
};