CC = g++
CCFLAGS = -g -w
exec: main.o UnsignedLargeInt.o makefile
	$(CC) $(CCFLAGS) -o Project7 main.o Item.o Animal.o Grassland.o Wolf.o Rabbit.o LazyRabbit.o ActiveRabbit.o
main.o:
	$(CC) $(CCFLAGS) -c main.C
Item.o:
	$(CC) $(CCFLAGS) -c Item.h
Animal.o:
	$(CC) $(CCFLAGS) -c Animal.C
Grassland.o:
	$(CC) $(CCFLAGS) -c Grassland.C
Wolf.o:
	$(CC) $(CCFLAGS) -c Wolf.C
Rabbit.o:
	$(CC) $(CCFLAGS) -c Rabbit.C
LazyRabbit.o:
	$(CC) $(CCFLAGS) -c LazyRabbit.C
ActiveRabbit.o:
	$(CC) $(CCFLAGS) -c ActiveRabbit.C
clean:
	rm -rf *.o
