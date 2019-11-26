#include <stdio.h>
#include "ReturnString.h"

int main() {

    char *name = do_string(return_string, "El Mehdi Benseddik");
    char *job = do_string(return_string, "Embedded System Engineer");
    printf("My Name is : %s\nMy Speciality : %s", name, job);
    return 0;
}