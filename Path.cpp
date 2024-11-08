//
//  Path.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/8/24.
//

#include <stdio.h>
#include "string"
#include "Path.h"
#include "iostream"

std::string Path::execute()  {
    std::string currentPath = std::filesystem::current_path().string();
    std::ofstream file("path.txt");
    file << currentPath;
    file.close();
    std::cout << currentPath << std::endl;
    return currentPath;  // Return path as a string
}
