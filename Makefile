lab2 : lab2.o 
	gcc lab2.o -o lab2
lab2 : hello_world.c
	gcc -c lab2.c 
lab2 :
	rm lab2.o
