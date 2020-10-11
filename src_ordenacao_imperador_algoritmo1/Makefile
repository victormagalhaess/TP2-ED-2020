CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra -g # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=./test_results

$(EXEC): main.cpp Civilization.o Selection.o
	$(CC) $(CFLAGS) main.cpp Civilization.o Selection.o -o $(EXEC)

Civilization.o: classes/Civilization.cpp
	$(CC) $(CFLAGS) -c classes/Civilization.cpp -o Civilization.o

Selection.o: classes/Selection.cpp
	$(CC) $(CFLAGS) -c classes/Selection.cpp -o Selection.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Civilization.o
	rm -rf Selection.o
