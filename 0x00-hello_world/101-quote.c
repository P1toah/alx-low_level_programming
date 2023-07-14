#include <unistd.h>

int main(void)
{
char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-1\n";
write(2, message, 59);
return(1);
}
