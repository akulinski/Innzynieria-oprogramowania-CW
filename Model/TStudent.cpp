/**
 * Project Untitled
 */


#include "TStudent.h"

/**
 * TStudent implementation
 */


/**
 * @param name
 * @return void
 */
TStudent::TStudent()
{

}

TStudent::~TStudent()
{

}

void TStudent::setName(std::string name) {
    this->studentName=name;
}

/**
 * @param age
 * @return void
 */
void TStudent::setAge(int age) {
    this->studentAge=age;
}

/**
 * @return string
 */
std::string TStudent::getName() {
    return this->studentName;
}

/**
 * @return int
 */
int TStudent::getAge() {
    return this->studentAge;
}
