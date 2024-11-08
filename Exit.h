//
//  Exit.h
//  CSC332 Group Project
//
//  Created by Mathew garcia on 11/8/24.
//

#ifndef Exit_h
#define Exit_h
#include "command.h"
#include "string"
#include "shell.h"

class Exit : public command{
public:
    std::string execute() override;
    shell* Shell;
};

#endif /* Exit_h */
