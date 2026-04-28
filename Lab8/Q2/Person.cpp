#pragma once
#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "REGINA";
    mAge = 40;
}
Person::Person(float newWeight) {
    mWeight = newWeight;
}
Person:: ~Person() {
    
}

void Person ::SetWeight(float newWeight) {
    mWeight = newWeight;

}

string Person::GetFirstName() {
     return mFirstName;
}

int Person::GetAge() {
    return mAge;
}

Person Person::operator+(const Person& OtherPerson) {
    Person Person;

    Person.mWeight = this->mWeight + OtherPerson.mWeight;
    return Person;
  
}