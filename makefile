CFLAGS = -Wall -Werror
OBJ = gcc -I src -c $< -o $@ $(CFLAGS)

default: bin obj bin/bullsandcows

bin/bullsandcows: obj/main.o
	gcc $^ -o $@ $(CFLAGS)
obj/main.o: src/main.c
	$(OBJ)

bin: 
	mkdir bin

obj:
	mkdir obj