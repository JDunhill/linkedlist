BINS=linkedtest libstaticlinkedlists.a static_linkedtest
all: $(BINS)

linkedlists.o: linkedlists.c linkedlists.h
	gcc -c linkedlists.c

libstaticlinkedlists.a: linkedlists.o 
	ar rcs libstaticlinkedlists.a linkedlists.o

linkedtest: linkedtest.c linkedlists.o
	gcc -o $@ $^

static_linkedtest: linkedtest.c
	gcc -o $@ $^ -L. -lstaticlinkedlists

clean:
	rm *.o linkedtest static_linkedtest libstaticlinkedlists.a  liblinkedlists.a