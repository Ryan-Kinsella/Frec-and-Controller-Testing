#include <utility>

//
// Created by R-k-l on 2018-11-16.
//

#include "Frec.h"
Frec::~Frec(){
    cout << "Object Deleted" << endl;
    //include any pointers
}
Frec::Frec(string str, int index){
    aString = std::move(str);
    indexOfFrec=index;
}
Frec::Frec(Frec& rightSide){
    aString = rightSide.aString;
    indexOfFrec = rightSide.indexOfFrec;
}
Frec& Frec::operator =(const Frec& rightSide){
    this->aString = rightSide.aString;
    this->indexOfFrec = rightSide.indexOfFrec;
    return *this;
}

string Frec::getString() {
    return aString;
}
int Frec::getIndex() {
    return indexOfFrec;
}

