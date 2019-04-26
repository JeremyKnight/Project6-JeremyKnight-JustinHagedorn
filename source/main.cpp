
//#include "iterator.h"
#include "HashTable.h"
#include <iostream>
#include <string>

int main() {
    HashTable<int> hash = HashTable<int>(20);
    
    hash.insert(1);
    /*
    hash.insert(2);
    hash.insert(145);
    hash.insert(21);

    hash.print();
    */
    return 0;
}