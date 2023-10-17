/*
 * Author:  Sayidolimxon Usmanxonov
 * Date:    17.10.2023
 * Name:    Sayidolimxon Usmanxonov
 */

#include <iostream>
#include "task_1.h"

int main() {
    //Testing class Family:
    Family myFamily;
    myFamily.extendedFamily = true;
    myFamily.numberOfMembers = 7;
    myFamily.numberOfChildren = 3;
    myFamily.income = 700;
    std::cout << "This family is " << (myFamily.extendedFamily ? "" : "not ") << "extended,\n"
    << "has " << myFamily.numberOfMembers << " members,\n"
    << "has " << myFamily.numberOfChildren << " children and " << myFamily.numberOfAdults() << " adults.\n"
    << "It makes " << myFamily.income << " dollars monthly.\n"
    << "The parents are " << (myFamily.getIfDivorced() ? "" : "not ") << "divorced" << std::endl;

    //Testing class Children:
    Children myChildren;
    myChildren.numberOfMembers = 3;
    std::cout << "\nThere are " << myChildren.numberOfMembers << " children and "
    << myChildren.numberOfAdults() << " adults in this object" << std::endl;
    return 0;
}
