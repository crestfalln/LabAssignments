CC = g++
CW = x86_64-w64-mingw32-g++
objects = 1 2 3 4 5
objectsWin = 1.exe 2.exe 3.exe 4.exe 5.exe
all : $(objects)

$(objects): % : src/%.c
	@mkdir -p bin/
	$(CC) $< -o bin/$@

win: $(objectsWin)
$(objectsWin): %.exe : src/%.c
	@mkdir -p binWin/
	$(CW) $< -o binWin/$@
