#ifndef _HASHTABLE_H_
#define _HASHTABLE_H_
#include <iostream>
#include <vector>
#include <list>
#include "myPair.h"
#include "myIterator.h"
#include <typeinfo>


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
            *this = other;
        }

        ~HashTable() {
        }

        HashTable &operator=(const HashTable<Type> & other) {
            //loop through hashtable
            //get each place

            this->setsize(other.getSize());
            for(int i = 0; i<other.getSize(); i++) {
                //if there is something
                if(!hash[i].empty()) {
                    std::cout << "hash has somethng in it at " << i << std::endl;
                    //loop through list in hashtable
                    
                    //std::cout << "looping through list at hash[" << i << "]" << std::endl;
                    //std::list<myPair<Type>> listInHash = hash[i];
                    /*
                    for(auto it = listInHash.begin(); it!= listInHash.end(); ++it) {
                        std::cout << "making a myPair type of hash at i" << std::endl;
                        myPair<Type> p = myPair<Type>(hash[i].list.first, hash[i].list.second);
                        std::cout << "this worked from making new myPair" << std::endl;
                        other.insert(p);
                        std::cout << "new myPair was inserted" << std::endl;
                    }   
                    */
                    hash[i].insert(other.getList(i));
                }
            }

        }

        myIterator<Type> insert(const Type& item) {
            myPair<Type> p = myPair<Type>(hashFunction(item), item);
            insert(p);
        }

        myIterator<Type> insert(list<myPair<Type>> l) {
            int i = std::stoi(l.front().first);
            hash[i] = l;
            return myIterator<Type>(hash.front());
        }

        myIterator<Type> insert(const myPair<Type>& item) {
            //create a type of insert function that creates a mostly unique string
            //initailaze list object if soemthing is there else, add it to the list
            int i = std::stoi(item.first);
            std::cout << i << std::endl;
            if(hash[i] !=NULL) {
                std::cout << "hash at i isn't null, pushing to front of list" << std::endl;  
                hash[i].push_front(item);
                return myIterator<Type>(hash, item);
            } else {
                //create list, and put item with the list
                std::list<myPair<Type>> newList =  std::list<myPair<Type>>();
                newList.push_front(item);
                hash[i] = newList;
                return myIterator<Type>(hash, item);

            }
        }

        /*
        myIterator insert(const list) {}
        */

        bool remove(const myPair<Type>& item){

        }

        bool remove(const string & key) {

        }

        myIterator<Type> locate(const myPair<Type> & item) {}

        myIterator<Type> locate(const string & key) {}


        int getSize() const{
            return size;
        }

        void setsize(int s) {
            size = s;
            hash.resize(s);
        }

        /*
        std::string to_string() {  }
        */

        void print() const {
            for(int i = 0; i<size; i++) {
                std::cout << "hash[" << i << "] ";
                if(!hash[i].empty()) {
                    std::cout << std::endl;
                    //loop through list in hashtable
                    
                    int thing = 0;
                    for(auto it = hash[i].begin(); it!= hash[i].end(); ++it) {
                        std::cout<< "    list at " << thing << ": " << hash[i].it.tostring() << std::endl;
                        thing++;
                    }
                   
                }
                else {
                    std::cout << "is empty" << std::endl;
                }
            }//hello
        }

        
        std::string hashFunction(const Type& item) const{
            if(typeid(item).name() == "int") {
                std::cout << "item is an int! \n";
                std::string str = to_string(item % size);
                return str;
            } else {
                std::cout << "item is not an int! \n";
            }
        }

        std::list<myPair<Type>> getList(int i) const{
            return hash[i];
        }






};

#endif