#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "ptentry.h"
#define PGSIZE 4096


int main(void) {
    const uint PAGES_NUM = 20;
    struct pt_entry entries[PAGES_NUM];
    
    // Allocate one pages of space
    char* ptr = sbrk(PAGES_NUM * PGSIZE);
    ptr += 50;

    printf(1, "getpgtable output: %d\n", getpgtable(entries, PAGES_NUM));

    for(int i = 0; i < PAGES_NUM; ++i){
        printf(1, "pdx: 0x%x ptx: 0x%x ppage: 0x%x present: %d writable: %d encrypted: %d\n", 
        entries[i].pdx, entries[i].ptx, entries[i].ppage, entries[i].present, entries[i].writable, entries[i].encrypted);
    }

    printf(1, "XV6_TEST_OUTPUT %d\n", mencrypt(ptr, PAGES_NUM));

    if (*(ptr + 5) == 0){
        // printf(1, "Weird\n");
    }
    // printf(1, "%x\n", *ptr);

    printf(1, "getpgtable output: %d\n", getpgtable(entries, PAGES_NUM));

    for(int i = 0; i < PAGES_NUM; ++i){
        printf(1, "pdx: 0x%x ptx: 0x%x ppage: 0x%x present: %d writable: %d encrypted: %d\n", 
        entries[i].pdx, entries[i].ptx, entries[i].ppage, entries[i].present, entries[i].writable, entries[i].encrypted);
    }

    exit();
}
