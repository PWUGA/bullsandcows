CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -I src -c $< -o $@ $(CFLAGS)
TEST = gcc -I src -I thirdparty -c $< -o $@ $(CFLAGS)
default: bin obj bin/bullsandcows

test: bin obj bin/bnctests

bin/bullsandcows: obj/main.o obj/numgenerator.o obj/inputchecker.o obj/counter.o obj/game.o
	gcc $^ -o $@ $(CFLAGS)

bin/bnctests: obj/main_test.o obj/numgenerator.o obj/inputchecker.o obj/counter.o
	gcc $^ -o $@ $(CFLAGS)

obj/main_test.o: src/main_test.c
	$(TEST)

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