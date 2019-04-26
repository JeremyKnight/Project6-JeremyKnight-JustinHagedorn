#ifndef _MYITERATOR_H_
#define _MYITERATOR_H_

#include "HashTable.h"
#include <iostream>  

template<typename Type>
class HashTable;

template<typename Type>
class myPair;

template<typename Type>
class myIterator {
    friend class HashTable<Type>;
    private:
        HashTable<Type>* hash;
        myPair<Type>* current;

        myIterator<Type>(HashTable<Type>* h, myPair<Type>* c) { //: hash(h), current(c) {} 
            current = c;
            hash = h;
        }
    public:
       
        Type& operator*() const {
            if(current == NULL) {
                throw std::invalid_argument("failed in pointer operator");
            }
            return current->second;
        }

};

#endif