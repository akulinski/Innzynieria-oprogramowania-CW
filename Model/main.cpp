#include <iostream>
#include "TStudent.h"
#include "TUniversity.h"

using namespace std;

int main()
{
    TUniversity univ("UMCS");
    univ.setData("Albert",22);
    univ.printData();


    return 0;
}
