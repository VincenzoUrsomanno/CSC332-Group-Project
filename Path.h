// path.h
//By Arielle Uy 11-7-2024

#ifndef path_h
#define path_h

#include "command.h"
#include <iostream>
#include <fstream> //reading or writing to files
#include <filesystem> //interacting with filesystem paths, directories, and files.

class Path : public command { //Path class inherits from the command base class
public:
    std::string execute() override; //Makes the path function unique rather than function as a signature execute command
};

#endif /* path_h */
