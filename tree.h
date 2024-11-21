//
//  tree.h
//  CSC332 Group Project
//
//  Created by Dorel Kalev on 11/6/24.
//
#include "command.h" 

class Tree : public command{ //Creates the tree class that inherits from command.h
    
public:
    std::string execute() override; //Execute method is overriden from command.h. This creates directories Dir0 and Dir1, with Dir1 being in Dir0
private:
    int create_directory(const char *dir_name); //Tree adds a new function to create a directory
};

