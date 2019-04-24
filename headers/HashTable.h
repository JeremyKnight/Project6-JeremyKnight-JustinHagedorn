#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include <iostream>
#include <vector>
#include <list>
#include "myPair.h"
#include "myIterator.h"


template<typename Type>
class HashTable {
    private:
        std::vector<std::list<myPair<Type>>> hash;
        int size;
    
    public:    
        HashTable(int s) {
            hash = vector<list<myPair<Type>>>(size);
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
                    
                    std::cout << "looping through list at hash[" << i << "]" << std::endl;
                    std::list<myPair<Type>> listInHash = hash[i];
                    for(std::list<myPair>::myIterator it = listInHash.begin(); it!= listInHash.end(); ++it) {
                        std::cout << "making a myPair type of hash at i" << std::endl;
                        myPair p = myPair(hash[i].it.first, hash[i].it.second);
                        std::cout << "this worked from making new myPair" << std::endl;
                        other.insert(p);
                        std::cout << "new myPair was inserted" << std::endl;
                    }   
                }
            }

        }

        myIterator insert(const myPair<Type>& item) {
            //create a type of insert function that creates a mostly unique string
            //initailaze list object if soemthing is there else, add it to the list
        }

        /*
        myIterator insert(const list) {}
        */

        bool remove(const myPair<Type>& item){

        }

        bool remove(const string & key) {

        }

        myIterator locate(const myPair<Type> & item) {}

        myIterator locate(const string & key) {}


        int getSize() {
            return size;
        }

        void setsize(int s) {
            size = s;
            hash.resize(s);
        }

        /*
        std::string to_string() {  }
        */

        void print() {
            for(int i = 0; i<size; i++) {
                std::cout << "hash[" << i << "] ";
                if(!hash[i].empty()) {
                    std::cout << std::endl;
                    //loop through list in hashtable
                    
                    int thing = 0;
                    for(std::list<myPair>::myIterator it = hash[i].begin(); it!= hash[i].end(); ++it) {
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