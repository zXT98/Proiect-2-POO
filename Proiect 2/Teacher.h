#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

#include <iostream>
#include <string>
#include "Persoana.h"

class Teacher:public Person{
public:
	Teacher();
	std::string get_occupation() override;
};

#endif // TEACHER_H_INCLUDED
