#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
//   int i;

//   if(argc < 2){
//     printf(2, "usage: kill pid...\n");
//     exit();
//   }
//   for(i=1; i<argc; i++)
    //char* virtual_addr = "5000";
    char* virtual_addr = "0x5500";
    printf(1, "%d\n", mencrypt(virtual_addr, 12));

    exit();
}
