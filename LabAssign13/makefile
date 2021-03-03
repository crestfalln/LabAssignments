OBJECTS = 1 2 3 4 5
CC = gcc

all : $(OBJECTS)
$(OBJECTS) : % : src/%.c
	$(CC) -g $< -o bin/$@.o 

