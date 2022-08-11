ABC.exe: main.o big31.o fact1.o rev1.o big2.o pallindrome.o sumoftwo.o fibonacci.o sorting.o
	gcc -o ABC.exe main.o big31.o fact1.o rev1.o big2.o pallindrome.o sumoftwo.o fibonacci.o sorting.o

main.o:main.c
	gcc -c main.c
big31.o:big31.c
	gcc -c big31.c
fact1.o:fact1.c
	gcc -c fact1.c
rev1.o:rev1.c
	gcc -c rev1.c
big2.o:big2.c
	gcc -c big2.c
pallindrome.o:pallindrome.c
	gcc -c pallindrome.c
sumoftwo.o:sumoftwo.c
	gcc -c sumoftwo.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
sorting.o:sorting.c
	gcc -c sorting.c
