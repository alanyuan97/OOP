# all: point.o main.o
# 	g++ point.o pointmain.o -o prog
#
# point.o: point.hpp point.cpp
# 	g++ -c point.cpp
#
# triangle.o: triangle.hpp triangle.cpp
# 	g++ -c triangle.cpp
#
# main.o: pointmain.cpp
# 	g++ -c pointmain.cpp
#
# run:
# 	./prog
#
# clean:
# 	rm -rf ./prog ./week6 *.o
#
# polynomial: polynomial.hpp polynomial.cpp polymain.cpp
# 	g++ -c polynomial.cpp
# 	g++ -c polymain.cpp
# 	g++ polynomial.o polymain.o -o poly
# 	./poly
#
# label: label_point.hpp label_point.cpp labelmain.cpp
# 	g++ -c label_point.cpp
# 	g++ -c labelmain.cpp
# 	g++ labelmain.o label_point.o -o label
# 	./label
#
# inherit: week6main.cpp
# 	g++ week6main.cpp -o week6
# 	./week6
#xxx:xxx make file statement
#tab:
# all: point.o main.o
# 	g++ point.o pointmain.o -o prog
#
# point.o: point.hpp point.cpp
# 	g++ -c point.cpp
#
# triangle.o: triangle.hpp triangle.cpp
# 	g++ -c triangle.cpp
#
# main.o: pointmain.cpp
# 	g++ -c pointmain.cpp
#
# run:
# 	./prog
#
# clean:
# 	rm -rf ./prog ./week6 *.o
#
# polynomial: polynomial.hpp polynomial.cpp polymain.cpp
# 	g++ -c polynomial.cpp
# 	g++ -c polymain.cpp
# 	g++ polynomial.o polymain.o -o poly
# 	./poly
#
# label: label_point.hpp label_point.cpp labelmain.cpp
# 	g++ -c label_point.cpp
# 	g++ -c labelmain.cpp
# 	g++ labelmain.o label_point.o -o label
# 	./label
#
# inherit: week6main.cpp
# 	g++ week6main.cpp -o week6
# 	./week6
#xxx:xxx make file statement
#tab:
TARGET=bin/prog
MAIN=bin/pointmain.o
CLASS=$(addprefix bin/, point.o)

CC=g++
CCFLAG=-Wall -std=c++11
INCFLAG=-I inc

#@ ignore bash syntax print
run: all
	@./$(TARGET)


all: $(TARGET)

clean:
	rm -rf ./bin/*.o

$(TARGET): $(CLASS) $(MAIN) | $(BINDIR)
	$(CC) $(CCFLAG) $^ -o $(TARGET)

bin/%.o: src/%.cpp inc/%.hpp
	$(CC) $(CCFLAG) $(INCFLAG) -c $< -o $@

$(MAIN): src/pointmain.cpp
	$(CC) $(CCFLAG) $(INCFLAG) -c $< -o $@

BINDIR:
	mkdir -p ./bin
