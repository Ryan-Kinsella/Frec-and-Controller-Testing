//
// Created by R-k-l on 2018-11-16.
//

#ifndef VECTORSOFOBJECTS_CONTROLLER_H
#define VECTORSOFOBJECTS_CONTROLLER_H

#include <iostream>
#include "Frec.h"
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <cstdio>
#include <fstream>
#include <cassert>
#include <functional>

using namespace std;
typedef unique_ptr<Frec> FrecPtr;

class Controller {
public:

    Controller(int a);
    ~Controller();
    void addFrecToList(string str,int ind); //using string
    void addFrecToList(FrecPtr ptrr); //using unique frec pointer, unique_ptr<Frec>
    void deleteAtIndex(int index);
    void deleteAll();
    void printAllStrings();
private:
    vector<FrecPtr> uniquePtrFrecVector;
    int unused;
};


#endif //VECTORSOFOBJECTS_CONTROLLER_H
