CC = g++
OBJECTS = 1 2 
all : $(OBJECTS)
$(OBJECTS) : % : src/%.c
	$(CC) $< -o bin/$@