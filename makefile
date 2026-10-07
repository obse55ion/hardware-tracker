CC = gcc
CFLAGS = -Wall -Wextra -std=c17

TARGET = hardware-tracker

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean