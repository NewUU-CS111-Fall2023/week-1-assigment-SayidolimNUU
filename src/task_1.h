/*
 * Author:  Sayidolimxon Usmanxonov
 * Date:    17.10.2023
 * Name:    Sayidolimxon Usmanxonov
 */

//ABSTRACTION is used many times throughout this code, I didn't mention it specifically

class Family {
//Here, I'm using ENCAPSULATION to hide sensitive data by declaring following attributes as private:
private:
    bool divorcedParents = 0;
    unsigned int actualNumberOfMembers = 0;
    int unofficialIncome = 0;
public:
    bool extendedFamily = 0;
    unsigned int numberOfMembers = 0;
    unsigned int numberOfChildren = 0;
    int income = 0;

    unsigned int numberOfAdults() {
        return numberOfMembers - numberOfChildren;
    }

    bool getIfDivorced () {
        return divorcedParents;
    };
    void setDivorced (bool divorced) {
        divorcedParents = divorced;
    }

    unsigned int getActualNumberOfMembers () {
        return numberOfMembers; //tss, it's a secret
    }
    void setActualNumberOfMembers (unsigned int secretNumber) {
        actualNumberOfMembers = secretNumber;
    }

    int getUnofficialIncome () {
        return 0; //tss, it's also a secret
    }
    void addUnofficialIncome (int addition) {
        if (unofficialIncome == 0) {
            unofficialIncome = income;;
        }
        unofficialIncome += addition;
    }
};

//Here, I'm using INHERITANCE by creating a new class Children, which inherits from Family:
class Children : public Family{ //for children from one family, where all of them are siblings
public:
    //Here, I'm rewriting the function (POLYMORPHISM) and changing its return value:
    unsigned int numberOfAdults () {
        return 0;
    }

};
