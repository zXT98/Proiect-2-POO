#ifndef ACTIVITATE_H_INCLUDED
#define ACTIVITATE_H_INCLUDED

#include <string>
#include "Room.h"
#include "Persoana.h"

class Activity{
public:
	Activity(Room*, Person*, std::string);
	~Activity();

	Room* get_Room();

    //void set_Location(Room*);

    Person* get_Owner();
   // void set_Owner(Person*);

    std::string get_Description();
	//void set_Description(std::string);


	friend std::istream& operator >> (std::istream& stream, Activity& p);
    friend std::ostream& operator << (std::ostream& stream, const Activity& p);

private:
	Room* m_Location;
	Person* m_Owner;
	std::string m_Description;
};


#endif // ACTIVITATE_H_INCLUDED
