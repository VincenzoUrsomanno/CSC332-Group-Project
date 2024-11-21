//
//  Path.cpp
//  CSC332 Group Project
//
//  Created by Arielle Uy on 11/7/24.
//

#include <stdio.h>
#include "string"
#include "Path.h"
#include "iostream"

std::string Path::execute()  { //defines Path() as an execute command to return as a string
    std::string currentPath = std::filesystem::current_path().string(); //Retrieves the current working directory as a std::filesystem::path object and converts it to a std::string.
    std::ofstream file("path.txt"); //Creates an output file named path.txt
    file << currentPath; //Writes the currentPath string to the path.txt file
    file.close(); //closes text file
    std::cout << currentPath << std::endl; //The path is printed to the console.
    return currentPath;  //The path is returned as a string to the caller
}
