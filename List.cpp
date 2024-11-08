//
//  List.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/7/24.
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
      ofstream outFile("tree.txt");
      if (!outFile.is_open()) {
          return "Error: Failed to create or open tree.txt.";
      }

      // Step 3: Run the "ls -l" command and capture the output
    FILE* pipe = popen("ls -l", "r");
      if (!pipe) {
          outFile.close();
          return "Error: Failed to execute ls -l command.";
      }

      // Step 4: Read the output and print to terminal and write to "tree.txt"
      char buffer[256];
      while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            cout << buffer;
          // Write to "tree.txt"
          outFile << buffer;
      }

      // Step 5: Close the pipe and the output file
    pclose(pipe);
      outFile.close();

      return "Directory contents listed successfully and saved to tree.txt.";
}
