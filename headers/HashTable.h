#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include <iostream>
#include <vector>
#include <list>
#include <pair.h>
#include <iterator.h>

template<typename Type>
class HashTable {
    private:
        vector<list<pair>> hash;
        int size;
    
    public:    
        HashTable(int s) {
            hash = vector<list<Type>>(size);
            size = s;
        }

        //copy constructor
        HashTable(const HashTable<Type> other) {
            
        }

        ~HashTable() {
        }

        HashTable &operator=(const HashTable<Type> & other) {
        }

        iterator insert(const pair<Type>& item) {
            //create a type of insert function that creates a mostly unique string
        }

        bool remove(const pair<Type>& item){}

        bool remove(const string & key) {}

        iterator locate(const pair<Type> & item) {}

        iterator locate(const string & key) {}


        int getSize() {
            return s;
        }







};

#endif