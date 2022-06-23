#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //to print hello, world
    printf("hello, world\n");
    //storing its return value in a variable called name of type string.
    string name = get_string("What's your name? ");
    //format a string (hence, the f in printf), a la the below, wherein name is a string.
    printf("hello, %s\n", name);
}
