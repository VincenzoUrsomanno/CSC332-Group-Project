//
//  main.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 10/31/24.
//

#include "iostream"
#include "string"
#include "userstate.h"
#include "map"
#include "shell.h"
#include "memory"
#include "unistd.h"

using namespace std;

int main() {
    string input;
    shell Shell;

    
    while(input != "exit"){
        
        cout << "input: ";
        cin >> input;
        
        pid_t pid = fork();
        if (pid < 0) {
        cout << "Failed to fork" << endl;
        } 
        else if (pid == 0) {
            cout << Shell.listen(input);
            _exit(0);
        }
        else {
            int status;
            waitpid(pid, &status, 0);
        }
        
        cout << endl;
    }
    
    return 0;
}
