#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include <iostream>
#include <vector>
#include <list>
#include "pair.h"
#include "iterator.h"


template<typename Type, typename OtherType>
class HashTable {
    private:
        std::vector<std::list<pair<OtherType>>> hash;
        int size;
    
    public:    
        HashTable(int s) {
            hash = vector<list<pair<OtherType>>>(size);
            size = s;
        }

        //copy constructor
        HashTable(const HashTable<Type>& other) {
            this = other;
        }

        ~HashTable() {
        }

        HashTable &operator=(const HashTable<Type> & other) {
            //loop through hashtable
            //get each place

            this.setsize(other.getSize());
            for(int i = 0; i<other.getSize(); i++) {
                //if there is something
                if(hash[i].empty()) {
                    std::cout << "hash has somethng in it at " << i << std::endl;
                    //loop through list in hashtable
                    std::list<pair>::iterator it;
                    std::cout << "looping through list at hash[" << i << "]" << std::endl;
                    for(it = hash[i].begin(); it!= data.end(); ++it) {
                        std::cout << "making a pair type of hash at i" << std::endl;
                        pair p = pair(hash[i].it.first, hash[i].it.second);
                        std::cout << "this worked from making new pair" << std::endl;
                        other.insert(p);
                        std::cout << "new pair was inserted" << std::endl;
                    }   
                }
            }

        }

        iterator insert(const pair<Type>& item) {
            //create a type of insert function that creates a mostly unique string
            //initailaze list object if soemthing is there else, add it to the list
        }

        /*
        iterator insert(const list) {}
        */

        bool remove(const pair<Type>& item){

        }

        bool remove(const string & key) {

        }

        iterator locate(const pair<Type> & item) {}

        iterator locate(const string & key) {}


        int getSize() {
            return s;
        }

        void setsize(int s) {
            size = s;
            hash.size() = s;
        }

        /*
        std::string to_string() {  }
        */

        void print() {
            for(int i = 0; i<other.getSize(); i++) {
                std::cout << "hash[" << i << "] ";
                if(hash[i].empty()) {
                    std::endl;
                    //loop through list in hashtable
                    std::list<pair>::iterator it;
                    int thing = 0;
                    for(it = hash[i].begin(); it!= data.end(); ++it) {
                        std::cout<< "    list at " << thing << ": " << hash[i].it.tostring() << std::endl;
                        thing++;
                    }
                   
                }
                else {
                    std::cout << "is empty" << std::endl;
                }
            }//hello
        }








};

#endif