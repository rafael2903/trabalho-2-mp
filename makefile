FLAGS=

run: all
	./program

all: romano.cpp testa_romano.cpp
	g++ -o program romano.cpp testa_romano.cpp $(FLAGS) -I.

verify: all
	valgrind --leak-check=full ./program
	@echo "====================== CPPCHECK ============================"
	cppcheck --enable=warning .
