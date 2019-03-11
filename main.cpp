#include <iostream>
#include "Controller.h"
#include "Frec.h"
#include <memory>

int main() {
    string a = "Hello, World!";
    string b = "bean";
    string c = "bea";
    string d = "beanss";
    string e = "beanafaf";
    int x = 1;

    Controller controllerObject(1);
    controllerObject.addFrecToList("Zero",0); //by pointers to an object
    controllerObject.addFrecToList("One",1);
    controllerObject.addFrecToList("Two",2);
    controllerObject.addFrecToList("Three",3);
    controllerObject.printAllStrings();
    cout << "Try to delete 2" << endl;
    controllerObject.deleteAtIndex(2);
    controllerObject.addFrecToList("Four",4);
    controllerObject.deleteAll();
    controllerObject.printAllStrings();

    controllerObject.printAllStrings();


    auto ptrA = make_unique<Frec> ("No beans",0);
    auto ptrB = make_unique<Frec> ("No jump",0);

    vector<FrecPtr> unique;

    unique.push_back(make_unique<Frec> ("Delete me",0));
    unique.push_back(make_unique<Frec> ("Keep me",1));
    unique.push_back(make_unique<Frec> ("Dont delete me",2));

    cout << unique[0]->getString() << endl;

    unique.erase(unique.begin(),unique.begin()+1);

    //once unique pointers are accessed,
    for (int i=0; i < unique.size() ; i++){
        cout << unique[i]->getString() << endl;
    }


    cout<<"About to leave the scope, the rest of objects will be deleted"<<endl;
}