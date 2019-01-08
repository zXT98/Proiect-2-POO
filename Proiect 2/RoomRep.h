#ifndef ROOMREP_H_INCLUDED
#define ROOMREP_H_INCLUDED

#include<vector>
#include "Repository.h"
#include "Room.h"

class RoomRepository : public Repository<Room>
{
public:
	Room* findByName(std::string);
};

#endif // ROOMREP_H_INCLUDED
