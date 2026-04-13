CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

.PHONY: build test clean

build:
	$(CC) $(CFLAGS) src/main.c src/messages.c -o progress_cli

test:
	$(CC) $(CFLAGS) tests/test_messages.c src/messages.c -o progress_test
	./progress_test

clean:
	rm -f progress_cli progress_test
