#ifndef ROL_H_INCLUDED
#define ROL_H_INCLUDED

class Role{
public:
    enum RoleType{
    STUDENT_ROLE, TEACHER_ROLE, GUEST_ROLE, ADMINISTRATIVE_ROLE
};

Role(RoleType type);

protected:
    RoleType m_Type;

};

#endif // ROL_H_INCLUDED
