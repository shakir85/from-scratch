#include <stdio.h>
#include <unistd.h>

int main(void) {
     char hostname[64];
     gethostname(hostname, 64);
     printf("hostname: %s\n", hostname);
     return 0;
}
