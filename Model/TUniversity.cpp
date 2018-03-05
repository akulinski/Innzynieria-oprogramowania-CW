/**
 * Project Untitled
 */


#include "TUniversity.h"

/**
 * TUniversity implementation
 */


/**
 * @param univName
 */
 TUniversity::TUniversity(std::string univName) {
    this->name=univName;
}

/**
 * @return void
 */
void TUniversity::printData() {
    std::cout<<this->name<<" "<<this->student->getAge()<<" "<<this->student->getName()<<std::endl;
    return;
}

/**
 * @param name
 * @param age
 * @return void
 */
void TUniversity::setData(std::string name, int age) {
     this->student->setAge(age);
    this->name=name;
}
