
//#include "iterator.h"
#include "HashTable.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "hello\n";
    HashTable<int> hash = HashTable<int>(20);
    std::cout<<"got here\n";
    hash.insert("hey",1);
    std::cout<<"got here\n";
    
    hash.insert("there", 32);//"electric");
   
    hash.insert("mr", 145);
    hash.insert("blue", 21);
    hash.insert("we're", 233);
    hash.insert("so", 122);
    hash.insert("pleased", 21);
    hash.insert("to", 43);//"light");
    hash.insert("be", 21);
    hash.insert("with", 21);
    hash.insert("you", 21);
    hash.insert("look", 21);
    hash.insert("around", 21);
    hash.insert("to", 54);//"orchestra");
    hash.insert("see", 21);
    hash.insert("what", 21);
    hash.insert("you", 21);
    hash.insert("do", 21);
    hash.insert("everybody", 21);
    hash.insert("smiles", 21);
    hash.insert("at", 21);
    hash.insert("you", 21);
    
    hash.print();
    return 0;
}