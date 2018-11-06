all: point.o triangle.o week4main.o
	g++ point.o triangle.o week4main.o -o prog

point.o: point.hpp point.cpp
	g++ -c point.cpp

triangle.o: triangle.hpp triangle.cpp
	g++ -c triangle.cpp

main.o: week4main.cpp
	g++ -c week4main.cpp

run:
	./prog

clean:
	rm -rf ./prog point.o triangle.o week4main.o

polynomial: polynomial.hpp polynomial.cpp polymain.cpp
	g++ -c polynomial.cpp
	g++ -c polymain.cpp
	g++ polynomial.o polymain.o -o poly
	./poly
