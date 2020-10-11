CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra -g # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=./test_results

$(EXEC): main.cpp Civilization.o Merge.o
	$(CC) $(CFLAGS) main.cpp Civilization.o Merge.o -o $(EXEC)

Civilization.o: classes/Civilization.cpp
	$(CC) $(CFLAGS) -c classes/Civilization.cpp -o Civilization.o

Merge.o: classes/Merge.cpp
	$(CC) $(CFLAGS) -c classes/Merge.cpp -o Merge.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Civilization.o
	rm -rf Merge.o