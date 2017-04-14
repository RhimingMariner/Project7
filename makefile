CC = g++
CCFLAGS = -g -w
exec: main.o UnsignedLargeInt.o makefile
	$(CC) $(CCFLAGS) -o Project5 main.o UnsignedLargeInt.o
main.o:
	$(CC) $(CCFLAGS) -c main.C
UnsighnedLargeInt.o:
	$(CC) $(CCFLAGS) -c UnsignedLargeInt.C
clean:
	rm -rf *.o