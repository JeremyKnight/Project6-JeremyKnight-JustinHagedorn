#ifndef _ITERATOR_H_
#define _ITERATOR_H_

#include "HashTable.h"
#include <iostream>  

template<typename Type>
class HashTable;

template<typename Type>
class pair;


template<typename Type>
class iterator {
    friend class HashTable<Type>;
    private:
        HashTable<Type>* hash;
        Pair<Type>* current;

        iterator(HashTable<Type>* h, Pair<Type>* c) : hash(h), current(c) {}
    public:
       

        Type& operator*() const {
            if(current == NULL) {
                throw std::invalid_argument("failed in pointer operator");
            }
            return current->second;
        }

        iterator& operator++() const {
            if(current == NULL) {
                throw std::invalid_argument("attempt to go past vector's limit");
            }
        }

};

#endif
