#include <iostream>
#include "Activitate.h"
#include "Activitate.cpp"
#include "Curs.h"
#include "Curs.cpp"
#include "Persoana.h"
#include "Persoana.cpp"
#include "PersoanaRep.h"
#include "PersoanaRep.cpp"
#include "Repository.h"
#include "Repository.cpp"
#include "Rol Administrativ.h"
#include "Rol Administrativ.cpp"
#include "Rol Guest.h"
#include "Rol Guest.cpp"
#include "Rol.h"
#include "Rol.cpp"
#include "Room.h"
#include "Room.cpp"
//#include "Student.h"
//#include "Student.cpp"
//#include "StudentRol.h"
//#include "StudentRol.cpp"
//#include "Teacher.h"
//#include "Teacher.cpp"
#include "TeacherRole.h"
#include "TeacherRole.cpp"
#include "RoomRep.h"
#include "RoomRep.cpp"

#include <string>
#include <vector>

int main(){
	/*std::cout<<"Programul functioneaza!!\n";
    std::vector<Person*> persons;
	std::vector<Room*> rooms;
	std::vector<Activity*> activities;
	//rooms.push_back(new Room("321"));
	//persons.push_back(new Person("","Gheorghe","0123456789","mihai@yahoo.com"));
	//activities.push_back(new Activity("laborator"));
	*/

	PersonRepository students;
    PersonRepository teachers;


    //teachers.add(new Person({new TeacherRole()},"123","Dan","Ana","danana@yahoo.com"));
    //teachers.add(new Person({new TeacherRole()},"456", "Sorescu", "Cristian", "crissor@yahoo.com"));

    //students.add(new Person({new StudentRole()}, "789", "Vaiscovici", "Laurentiu", "laurva@yahoo.com"));
    //students.add(new Person({new StudentRole(10)}, "246", "Cristescu", "Ana", "anacristescu@yahoo.com"));

    RoomRepository rooms;
    rooms.add(new Room("Titeica"));
    rooms.add(new Room("Pompeiu"));
    rooms.add(new Room("Spiru Haret"));

	//std::cout << "Studentii sunt:\n";
    //students.print();

    //std::cout << "Profesorii sunt:\n";
    //teachers.print();

    std::cout << "Salile sunt:\n";
    rooms.print();


	}




