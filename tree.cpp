//
//  tree.cpp
//  CSC332 Group Project
//
//  Created by Dorel Kalev on 11/6/24.
//

#include <stdio.h>
#include "Tree.h"
#include "string"
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

using namespace std;

//Function to create a directory and handle errors
int Tree::create_directory(const char *dir_name) {
    //Try to create the directory
    if (mkdir(dir_name, 0777) == -1) {
        if (errno == EEXIST) {
            printf("Directory %s already exists.\n", dir_name);
        } else {
            perror("Error creating directory");
        }
        return -1; //Return failure if mkdir fails
    }
    printf("Directory %s created successfully.\n", dir_name);
    return 0; //Return success
}


string Tree::execute(){
    // Step 1: Create Dir0
       if (create_directory("Dir0") != 0) {
           return "Failed to create Dir0.";
       }

       // Step 2: Change directory to Dir0
       if (chdir("Dir0") != 0) {
           perror("Error changing directory to Dir0");
           return "Failed to change directory to Dir0.";
       }

       // Step 3: Create Dir1 inside Dir0
       if (create_directory("Dir1") != 0) {
           return "Failed to create Dir1 inside Dir0.";
       }

       return "Directories Dir0 and Dir1 created successfully.";
}
