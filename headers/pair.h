#ifndef _PAIR_H_
#define _PAIR_H_

#include <iostream>
#include <string>

using namespace std;

template<typename Type>
struct pair {
    string first;
    Type second;

    pair(const string& x, const Type& y) : first(x), second(y) {}

    pair() : first(""), second(Type()) {}

    pair(const pair& other) { first = other.first; second = other.second; }

    string to_string() {
        string str = first + " " + second;
    }
};

#endif