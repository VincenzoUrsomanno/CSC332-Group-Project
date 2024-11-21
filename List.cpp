//
//  List.cpp
//  CSC332 Group Project
//
//  Created by Vincenzo Ursomanno on 11/7/24.
//

#include <stdio.h>
#include "List.h"
#include "string"
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include "iostream"


using namespace std;

string List::execute(){
    
      // Step 2: Open "tree.txt" for writing
      //The ofstream object outFile is used to open (or create) the file tree.txt for writing.
      // If the file cannot be opened (e.g., due to permission issues), the function immediately returns an error message.
      ofstream outFile("tree.txt");
      if (!outFile.is_open()) {
          return "Error: Failed to create or open tree.txt.";
      } 

      // Step 3: Run the "ls -l" command and capture the output
      /*
      The popen() function executes the ls -l command and returns a pipe that allows the program to read the output of the command.
      ls -l lists all files in the current directory in a detailed format (permissions, file size, timestamps, etc.).
      If popen() fails the program closes the file and returns an error.
      */
    FILE* pipe = popen("ls -l", "r");
      if (!pipe) {
          outFile.close();
          return "Error: Failed to execute ls -l command.";
      }

      // Step 4: Read the output and print to terminal and write to "tree.txt"
      //cout << buffer; prints each line of the output to the terminal, so the user sees the directory listing.
      char buffer[256];
      while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            cout << buffer;
          // Write to "tree.txt"
          outFile << buffer;
      }

      // Step 5: Close the pipe and the output file
      //closes the pipe created by popen(). This releases any system resources used by the command execution.
      //ensures that tree.txt is properly saved and no further data is written.
    pclose(pipe);
      outFile.close();

      return "Directory contents listed successfully and saved to tree.txt.";
      //If all steps succeed, the function returns a success message, indicating that the directory contents were both displayed and saved.
}
