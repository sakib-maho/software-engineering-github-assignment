#include <stdio.h>
#include <stdlib.h>

#include "messages.h"

int main(int argc, char *argv[]) {
    int completed;
    int total;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <completed_tasks> <total_tasks>\n", argv[0]);
        return 1;
    }

    completed = atoi(argv[1]);
    total = atoi(argv[2]);

    printf("%s\n", build_status_message(completed, total));
    return 0;
}
