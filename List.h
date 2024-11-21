//
//  List.h
//  CSC332 Group Project
//
//  Created by Vincenzo Ursomanno on 11/7/24.
//

#ifndef List_h
#define List_h
#include "command.h"
/*
Prevents multiple inclusions of this header file during compilation, which could lead to errors. 
If List_h is already defined, the preprocessor skips the contents of this file.
Includes the command base class. The List class inherits from command and must implement its virtual execute() method.
*/

/*
Declares the List class as inheriting from the command base class.
This ensures that List can be treated as a type of command and integrated into the shell's command map seamlessly.
*/
class List : public command{
  
public: /*Declares the execute() function as an override of the pure virtual function in command.
This function contains the core logic for the list command, such as clearing the screen, listing directory contents, and saving the output to a file.*/
     std::string execute() override;
    
};

#endif /* List_h */
//Marks the end of the include guard, ensuring this file's contents are only included once in the program.
