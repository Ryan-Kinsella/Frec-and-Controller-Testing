//
// Created by R-k-l on 2018-11-16.
//

//#include <algorithm>
#include "Controller.h"
Controller::Controller(int a) {
    unused = 0;
}
Controller::~Controller(){
    for (auto &i : uniquePtrFrecVector) {
        uniquePtrFrecVector.erase(uniquePtrFrecVector.begin(),uniquePtrFrecVector.end());
    }
    cout<<"Controller Object Deleted"<<endl;
}
void Controller::addFrecToList(string str,int ind) {
    uniquePtrFrecVector.push_back(make_unique<Frec> (str,ind));
}
void Controller::deleteAtIndex(int index) {
    uniquePtrFrecVector.erase(uniquePtrFrecVector.begin()+index,uniquePtrFrecVector.begin()+index+1);
}
void Controller::printAllStrings(){
    for (int i=0; i < uniquePtrFrecVector.size() ; i++){
        cout << uniquePtrFrecVector[i]->getString() << endl;
    }
}

void Controller::deleteAll() {
    uniquePtrFrecVector.erase(uniquePtrFrecVector.begin(),uniquePtrFrecVector.end());
}
