run: program
	./program

IDIR =../includes
CC=g++
FLAGS=-Wall -pedantic -I$(IDIR)

ODIR=obj

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o testa_romano.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(FLAGS)

program: $(OBJ)
	$(CC) -o $@ $^ $(FLAGS)

verify: program
	valgrind --leak-check=full ./program
	@echo "====================== CPPCHECK ============================"
	cppcheck --enable=warning .

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

