FLAGS= -Wall -pedantic

run: all
	./program

all: romano.c testa_romano.c
	g++ -o program romano.c testa_romano.c $(FLAGS) -I.

verify: all
	valgrind --leak-check=full ./program
	@echo "====================== CPPCHECK ============================"
	cppcheck --enable=warning .
