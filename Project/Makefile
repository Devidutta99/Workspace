result : Electricitybillcalculator.c agricultural.c commercial.c industrial.c municipal.c restidential.c rural.c bill.h
	gcc Electricitybillcalculator.c -o result libbill.a
agricultural.o : agricultural.c
	gcc -c agricultural.c agricultural.o
industrial.o : industrial.c
	gcc -c industrial.c industrial.o
commercial.o : commercial.c
	gcc -c commercial.c commercial.o
municipal.o : municipal.c
	gcc -c municipal.c municipal.o
restidential.o : restidential.c
	gcc -c restidential.c restidential.o
rural.o : rural.c
	gcc -c rural.c rural.o
clean :
	rm *.o
