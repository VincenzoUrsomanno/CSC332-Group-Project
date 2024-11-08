//
//  path.h
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/8/24.
//

// path.h
//By Arielle Uy 11-7-2024

#ifndef path_h
#define path_h

#include "command.h"
#include <iostream>
#include <fstream>
#include <filesystem>

class Path : public command {
public:
    std::string execute() override;
};

#endif /* path_h */
