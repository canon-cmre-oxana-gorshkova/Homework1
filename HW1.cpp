#include <iostream>
#include "TemplateClass.h"
#include "TemplateClass.cpp"

int main()
{
	TemplateClass<int, std::string> templateInstance1(1, "hello");
	TemplateClass<int, std::string> templateInstance2(2, "world");
	TemplateClass<int, std::string> sumOfInstances = templateInstance1 + templateInstance2;
	sumOfInstances.print();
}
