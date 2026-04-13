#include <stdio.h>
#include <string.h>

#include "messages.h"

int main(void) {
    if (strcmp(build_status_message(0, 0), "No tasks planned.") != 0) {
        return 1;
    }
    if (strcmp(build_status_message(0, 5), "No tasks completed yet.") != 0) {
        return 1;
    }
    if (strcmp(build_status_message(5, 5), "All tasks completed.") != 0) {
        return 1;
    }
    if (strcmp(build_status_message(2, 5), "Work in progress.") != 0) {
        return 1;
    }

    printf("All tests passed.\n");
    return 0;
}
