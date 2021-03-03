CC = g++
OBJECTS = 1 2 3 4 5
all : $(OBJECTS)
$(OBJECTS) : % : src/%.c
	$(CC) -g $< -o bin/$@.o