CC=gcc
CFLAGS=-I. -O2
DEPS=linalg.h
OBJ=main.o ler.o imprime.o pivoteamento.o subsreversa.o multiplicacao.o determinante.o inversa.o jacobi.o
TARGET=bibl
LIBS=-lm -L. -llinalg

%.o: %.c $(DEPS)
	$(CC) -c -fpic -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -Wl,-rpath=. -o $@ $^ $(CFLAGS) $(LIBS)

library: $(OBJ)
	$(CC) -shared -o liblinalg.so $^ $(CFLAGS)
	
	
clean:
	rm $(OBJ)
