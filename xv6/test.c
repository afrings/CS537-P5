#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#define PGSIZE 4096


int main(void) {
    const uint PAGES_NUM = 3;
    
    // Allocate one pages of space
    char* ptr = sbrk(PAGES_NUM * PGSIZE);
    ptr += 50;
    printf(1, "XV6_TEST_OUTPUT %d\n", mencrypt(ptr, PAGES_NUM));
    
    exit();
}
