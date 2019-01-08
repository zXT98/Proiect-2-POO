#ifndef ROL_GUEST_H_INCLUDED
#define ROL_GUEST_H_INCLUDED

#include "Rol.h"

class RolGuest : public Role
{
public:
    RolGuest() : Role(GUEST_ROLE) {};
};



#endif // ROL_GUEST_H_INCLUDED
