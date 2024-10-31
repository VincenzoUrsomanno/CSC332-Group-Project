//
//  shell.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 10/31/24.
//

#include "shell.h"
#include "iostream"

using namespace std;

shell::shell() {
    commandMap.insert({"tree",userstate::tree});
    commandMap.insert({"list",userstate::list});
    commandMap.insert({"path",userstate::path});
    commandMap.insert({"exit",userstate::quit});
}


string shell::listen(string& input){
    
    if(commandMap.find(input) != commandMap.end()){
        currentUserstate = commandMap.find(input)->second;
       return runCommand();
    }
    
    return "Command doesn't exist";
}

userstate shell::GetCurrentState(){
    return currentUserstate;
}

string shell::runCommand(){
        switch(currentUserstate){
            case tree:
                //put your functions here
                return "running tree";
            case list:
                //put your functions here
                return "running list";
                
            case path:
                //put your functions here
                return "running path";
                
            case quit:
                //put your functions here
                
                cout << "please press enter to exit shell...";
                cin.clear();
                cin.ignore(INT_MAX,'\n');
                cin.get();
                
                currentUserstate = none;
                return "We have exit the application";
                
            default:
                return "invalid command";
        }

}


