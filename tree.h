//
//  tree.h
//  CSC332 Group Project
//
//  Created by Dorel Kalev on 11/6/24.
//
#include "command.h"


class Tree : public command{
    
public:
    std::string execute() override;
private:
    int create_directory(const char *dir_name); 
};

