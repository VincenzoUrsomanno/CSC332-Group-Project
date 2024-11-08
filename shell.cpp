//
//  shell.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 10/31/24.
//

#include "shell.h"
#include "iostream"
#include "Tree.h"
#include "memory"
#include "List.h"
#include "Path.h"
#include "Exit.h"

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
            case userstate::tree:{
                //smart ptr, we want to build this on heap because we dont always need this.
                unique_ptr<Tree> treePtr = make_unique<Tree>();
                return treePtr->execute();
            }
            case userstate::list:{
                
                system("clear");
                unique_ptr<List> listPtr = make_unique<List>();
                return listPtr->execute();
            }
                
            case userstate::path:{
                
                unique_ptr<Path> pathPtr = make_unique<Path>();
                return pathPtr->execute();
            }
                
            case userstate::quit:{
                unique_ptr<Exit> exitPtr = make_unique<Exit>();
                exitPtr->Shell = this;
                return exitPtr->execute();
            }
                
            default:
                return "invalid command";
        }

}



void shell::updateRecentCommands(string& input){
    if(recentCommands.size() >= 5){
        recentCommands.pop_front();
    }
    recentCommands.push_back(input);
}

deque<string> shell::getRecentCommands(){
    return recentCommands;
}
