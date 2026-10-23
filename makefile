studentHeap: address.o date.o student.o main.o
	g++ -g address.o date.o student.o main.o -o studentHeap

studentTest: address.o date.o student.o studentTest.o
	g++ -g address.o date.o student.o studentTest.o -o studentTest

studentTest.o: address.h date.h student.h studentTest.cpp
	g++ -c -g studentTest.cpp

main.o: address.h date.h student.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

student.o: address.h date.h student.h student.cpp
	g++ -c -g student.cpp

clean:
	rm *.o
	rm studentHeap

run: studentHeap
	./studentHeap

test: studentTest
	./studentTest

debug: studentHeap
	gdb studentHeap
