/**
 * Project Untitled
 */


#ifndef _TUNIVERSITY_H
#define _TUNIVERSITY_H
#include <iostream>
#include "TStudent.h"

class TUniversity {
public: 
    
    /**
     * @param univName
     */
     TUniversity(std::string univName);
    
    void printData();
    
    /**
     * @param name
     * @param age
     */
    void setData(std::string name, int age);
private: 
    TStudent* student=new TStudent();
    std::string name;
};

#endif //_TUNIVERSITY_H
