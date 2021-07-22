#cc is variable 
#target : dependencies
#tab 	commands	
#CC=gcc                                                     wrong way of doing 
#objects: main.o quicksort.o bubblesort.o merge.o insertion.o selection.oi
#	 gcc  sorting.h main.c quicksort.c bubblesort.c merge.c insertion.c selection.c -o objects
#include /d2/makefile to be included 
#main.o:main.c -I sorting.h
#	gcc -c -I. main.c


TARGET = myexec
OBJS=main.o quicksort.o bubblesort.o merge.o insertion.o selection.o 

all:$(TARGET)
$(TARGET):$(OBJS)
	gcc $(OBJS) -o$@
# rm -f *.o remove files but also print command to stdout -@ to not show
clean:
	-@rm -f *.o
#remove all objects files

