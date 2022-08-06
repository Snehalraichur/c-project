ABC.exe: main.o big31.o fact1.o rev1.o
	gcc -o ABC.exe main.o big31.o fact1.o rev1.o
main.o:main.c
	gcc -c main.c
big31.o:big31.c
	gcc -c big31.c
fact1.o:fact1.c
	gcc -c fact1.c
rev1.o:rev1.c
	gcc -c rev1.c
