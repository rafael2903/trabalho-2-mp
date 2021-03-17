FLAGS=

run: all
	./program

all: romano.cpp testa_romano.cpp
	g++ -o program romano.cpp testa_romano.cpp $(FLAGS) -I.

verify: make_list
	valgrind --leak-check=full ./program
	@echo "====================== CPPCHECK ============================"
	cppcheck --enable=warning .
