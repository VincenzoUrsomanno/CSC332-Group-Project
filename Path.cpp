//
//  Path.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/8/24.
//

#include <stdio.h>
#include "string"
#include "Path.h"

std::string Path::execute()  {
    std::string currentPath = std::filesystem::current_path().string();
    std::ofstream file("path.txt");
    file << currentPath;
    file.close();
    return currentPath;  // Return path as a string
}
