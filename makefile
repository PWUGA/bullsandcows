CFLAGS = -Wall -Werror
OBJ = gcc -I src -c $< -o $@ $(CFLAGS)

default: bin obj bin/bullsandcows

bin/bullsandcows: obj/main.o obj/numgenerator.o
	gcc $^ -o $@ $(CFLAGS)

obj/numgenerator.o: src/numgenerator.c
	$(OBJ)

obj/main.o: src/main.c
	$(OBJ)

bin: 
	mkdir bin

obj:
	mkdir obj