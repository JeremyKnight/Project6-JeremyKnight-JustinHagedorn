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
            hash = vector<list<myPair<Type>>>(s);
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
                    this->insert(other.getList(i));
                }
            }

        }

        myIterator<Type> insert(std::string s,const Type& item) {
            try {
                std::cout << "entering insert helper function\n";
                myPair<Type> p = myPair<Type>(s, item);
                insert(p);
            } catch(const std::bad_alloc&) {
                std::cout << "found bad alloc inside insert helper function!" << std::endl;
            }
        }
        

        myIterator<Type> insert(list<myPair<Type>> l) {
            int i = std::stoi(l.front().first);
            hash[i] = l;
            //cout << 
            return myIterator<Type>(this, &hash[i].front());
        }

        myIterator<Type> insert(const myPair<Type>& item) {
            //create a type of insert function that creates a mostly unique string
            //initailaze list object if soemthing is there else, add it to the list
            int i = hashFunction(item.first);
            std::cout << i << " \n"; 
            std::cout << i << std::endl;
            if(!hash[i].empty()) {
                std::cout << "hash at i isn't null, pushing to front of list" << std::endl;  
                hash[i].push_front(item);
                //std::remove_const<const myPair<Type>>::type 
                return myIterator<Type>(this, &item);
            } else {
                //create list, and put item with the list
                std::cout << "create new list for hash at i \n";
                std::list<myPair<Type>> newList =  std::list<myPair<Type>>();
                newList.push_front(item);
                hash[i] = newList;
                return myIterator<Type>(this, &item);

            }
        }

        /*
        myIterator insert(const list) {}
        */

        bool remove(const myPair<Type>& item){

        }

        bool remove(const string & key) {

        }

        myIterator<Type> locate(const myPair<Type> & item) {
            
            hash[hashFunction(item.first)];
            
        }

        myIterator<Type> locate(const string & key) {

        }


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
                        std::cout<< "    list at " << thing << ": " << it->toString() << std::endl;
                        thing++;
                    }
                }
                else {
                    std::cout << "is empty" << std::endl;
                }
            }//hello
        }

        //hash function takes a string and places it at int
        int hashFunction(std::string s) const {
            
            int i = int(s.front()) % size;
            std::cout << i << " is hash function for string: " << s << std::endl;
            return i;

        }

        std::list<myPair<Type>> getList(int i) const{
            return hash[i];
        }






};

#endif