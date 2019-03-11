//
// Created by R-k-l on 2018-11-16.
//

#ifndef VECTORSOFOBJECTS_FREC_H
#define VECTORSOFOBJECTS_FREC_H
#include <string>
#include <iostream>
//#include "Controller.h"
using namespace std;

class Frec {
public:
    //destructor SHOULD be normal since there are no pointers, otherwise in
    //the destructor would need to use delete pVariableName
    Frec(){};
    ~Frec();
    Frec(string str, int index);

    //need a copy constructor and an assignment operator
    Frec (Frec& newFrec);
    Frec& operator =(const Frec& rightSide);

    string getString();
    int getIndex();
private:
    string aString;
    int indexOfFrec;
};


#endif //VECTORSOFOBJECTS_FREC_H
