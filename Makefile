main : main_program.o
	g++ -o lab3 main_program.o

main_program.o: main_program.cpp
	g++ -c main_program.cpp

clean:
	rm -f *.o
