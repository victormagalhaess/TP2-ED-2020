CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra -g # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=./test_results

$(EXEC): main.cpp Civilization.o Quick.o
	$(CC) $(CFLAGS) main.cpp Civilization.o Quick.o -o $(EXEC)

Civilization.o: classes/Civilization.cpp
	$(CC) $(CFLAGS) -c classes/Civilization.cpp -o Civilization.o

Quick.o: classes/Quick.cpp
	$(CC) $(CFLAGS) -c classes/Quick.cpp -o Quick.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Civilization.o
	rm -rf Quick.o