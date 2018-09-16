CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -I src -c $< -o $@ $(CFLAGS)

default: bin obj bin/bullsandcows

bin/bullsandcows: obj/main.o obj/numgenerator.o obj/inputchecker.o obj/counter.o obj/game.o
	gcc $^ -o $@ $(CFLAGS)

obj/numgenerator.o: src/numgenerator.c
	$(OBJ)

obj/inputchecker.o: src/inputchecker.c
	$(OBJ)
	
obj/counter.o: src/counter.c
	$(OBJ)

obj/game.o: src/game.c
	$(OBJ)

obj/main.o: src/main.c
	$(OBJ)

bin: 
	mkdir bin

obj:
	mkdir obj