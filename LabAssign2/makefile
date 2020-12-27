CC = g++
OBJECTS = 1 2 3 4 4v2 5 
all : $(OBJECTS)
$(OBJECTS) : % : src/%.c
	$(CC) $< -o bin/$@