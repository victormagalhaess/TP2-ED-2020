CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra -g # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp2 # nome do executavel que sera gerado, nao troque
TMPOUT=./test_results

$(EXEC): main.cpp Civilization.o Bubble.o
	$(CC) $(CFLAGS) main.cpp Civilization.o Bubble.o -o $(EXEC)

Civilization.o: classes/Civilization.cpp
	$(CC) $(CFLAGS) -c classes/Civilization.cpp -o Civilization.o

Bubble.o: classes/Bubble.cpp
	$(CC) $(CFLAGS) -c classes/Bubble.cpp -o Bubble.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Civilization.o
	rm -rf Bubble.o