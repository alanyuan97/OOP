#xxx:xxx make file statement
#tab:
TARGET=bin/prog
MAIN=bin/labelmain.o
CLASS=$(addprefix bin/, label_point.o)

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

$(MAIN): src/labelmain.cpp
	$(CC) $(CCFLAG) $(INCFLAG) -c $< -o $@

BINDIR:
	mkdir -p ./bin
