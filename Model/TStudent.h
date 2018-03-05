/**
 * Project Untitled
 */


#ifndef _TSTUDENT_H
#define _TSTUDENT_H
#include <iostream>

class TStudent {
public: 
    
    TStudent();
    ~TStudent();
    /**
     * @param name
     */
    void setName(std::string name);
    
    /**
     * @param age
     */
    void setAge(int age);
    
    std::string getName();
    
    int getAge();
private: 
    std::string studentName;
    int studentAge;
};

#endif //_TSTUDENT_H
