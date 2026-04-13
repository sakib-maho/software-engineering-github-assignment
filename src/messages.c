#include "messages.h"

const char *build_status_message(int completed, int total) {
    if (total <= 0) {
        return "No tasks planned.";
    }
    if (completed <= 0) {
        return "No tasks completed yet.";
    }
    if (completed >= total) {
        return "All tasks completed.";
    }
    return "Work in progress.";
}
