default: strsep.o
	gcc -o test strsep.o
strsep.o: strsep.c
	gcc -c strsep.c
run:
	./test
clean:
	rm -f *out *~ *o 
    