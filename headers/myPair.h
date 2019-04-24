#ifndef _MYPAIR_H_
#define _MYPAIR_H_

#include <iostream>
#include <string>

using namespace std;

template<typename Type>
struct myPair {
    string first;
    Type second;

    myPair(const string& x, const Type& y) : first(x), second(y) {}

    myPair() : first(""), second(Type()) {}

    myPair(const myPair& other) { first = other.first; second = other.second; }

    string to_string() {
        string str = first + " " + second;
    }
};

#endif