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

using namespace std;

class shell{
public:
    shell();
    string listen(string& input);    
    userstate GetCurrentState();
    
    string runCommand();
    
    
private:
    userstate currentUserstate = userstate::none;
    map<string,userstate> commandMap;

    
};
#endif /* shell_hpp */
