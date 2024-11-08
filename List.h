//
//  List.h
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/7/24.
//

#ifndef List_h
#define List_h
#include "command.h"

class List : public command{
  
public:
    virtual std::string execute() override;
    
};

#endif /* List_h */
