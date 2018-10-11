all: driver.o list.o
	gcc -o go driver.o list.o
	./go

driver.o: driver.c list.h
	gcc -c driver.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm go
	rm *.o
