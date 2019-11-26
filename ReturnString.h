//
// Created by HP-EliteBook on 11/26/2019.
//

#ifndef FUNCTIONRETURNSTRINGS_RETURNSTRING_H
#define FUNCTIONRETURNSTRINGS_RETURNSTRING_H
typedef char* (*returnString) (char []);

char* do_string(returnString stringFunction, char s[]) {
    return stringFunction(s);
}

char* return_string(char s[]) {
    return s;
}
#endif //FUNCTIONRETURNSTRINGS_RETURNSTRING_H
