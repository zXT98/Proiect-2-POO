#ifndef PROFESOR_H_INCLUDED
#define PROFESOR_H_INCLUDED

#include <iostream>
#include <string>
#include "Person.h"

class Teacher:public Person{
public:
	Teacher();
	std::string get_occupation() override;
};

#endif // PROFESOR_H_INCLUDED
