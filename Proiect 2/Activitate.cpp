#include "Activitate.h"
#include <iostream>

Activity::Activity(Room *room, Person *person, std::string description)
{
    m_Location = room;
    m_Owner = person;
    m_Description = description;
}

Activity::~Activity(){
}

Room* Activity::get_Room()
{
    return m_Location;
}

/*void Activity::set_Location(Room * location){
	m_Location = location;
}*/

/*Room * Activity::get_Location(){
	return m_Location;
}
*/
/*void Activity::set_Owner(Person * owner){
	m_Owner = owner;
}*/

Person * Activity::get_Owner(){
	return m_Owner;
}

/*void Activity::set_Description(std::string description){
	m_Description = description;
}*/

std::string Activity::get_Description(){
	return m_Description;
}
