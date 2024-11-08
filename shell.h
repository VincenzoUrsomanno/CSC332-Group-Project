//
//  shell.hpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 10/31/24.
//

#ifndef shell_h
#define shell_h

#include <stdio.h>
#include "userstate.h"
#include "map"
#include <string>
#include <deque>

using namespace std;

class shell{
public:
    shell();
    string listen(string& input);    
    userstate GetCurrentState();
    
    string runCommand();
    
    void updateRecentCommands(string& input);
    
    deque<string> getRecentCommands();
    
private:
    userstate currentUserstate = userstate::none;
    map<string,userstate> commandMap;
    deque<string> recentCommands;


    
};
#endif /* shell_hpp */
