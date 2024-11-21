//
//  Exit.cpp
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/8/24.
//

#include <stdio.h>
#include "string"
#include "Exit.h"
#include "iostream"
#include "List.h"

std::string Exit::execute() {
    //post the recent commands.
    cout << "Recent commands:" << endl;
    if(Shell){
        //this is a string reference, auto is just nice to use 
        for(auto& cmd : Shell->getRecentCommands()){
            cout << cmd << endl;
        }
    }
    else {
        cout << "Shell failed" << endl;
    }
    //pointer to re-use list functionatlity.
    unique_ptr<List> list = make_unique<List>();
    if(list){
        cout << list->execute() << endl;
    }
    //press enter to exit
    cout << "please press enter to exit shell...";
    cin.clear();
    cin.ignore(INT_MAX,'\n');
    cin.get();
    
    
    
    return "We are now exiting the application";
}
