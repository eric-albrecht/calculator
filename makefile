main: main.o calculator.o
	gcc -o main main.o calculator.o

calculator.o: calculator.c operators.h
	gcc -c calculator.c operators.h

main.o: main.c calculator.h
	gcc -c main.c calculator.h

clean:
	rm main *.o *.gch

