//
//  tree.h
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/6/24.
//
#include "command.h"


class Tree : public command{
    
public:
    virtual std::string execute();
private:
    int create_directory(const char *dir_name); 
};

