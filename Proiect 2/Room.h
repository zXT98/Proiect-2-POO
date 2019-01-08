#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include <string>

class Room{
public:
	Room(std::string);
	~Room();

	std::string get_Name();

    friend std::istream& operator>> (std::istream& stream, Room& p);
    friend std::ostream& operator<< (std::ostream& stream, const Room& p);


protected:
	std::string m_Name;

};

#endif // ROOM_H_INCLUDED
