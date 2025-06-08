CC = clang
CFLAGS = -Wall -Wextra -std=c11
SRC = main.c ask_numbers.c calculator.c globals.c
OBJ = $(SRC:.c=.o)

TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
