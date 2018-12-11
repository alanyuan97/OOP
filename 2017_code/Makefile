TARGET=bin/item
MAIN=bin/main.o
CLASS=$(addprefix bin/, item.o unres.o res.o)

CC=g++
CCFLAG=-Wall -std=c++11
INCFLAG=-I inc

run: all
	@./$(TARGET)

all: $(TARGET)

clean:
	rm -rf ./bin/*.o

$(TARGET): $(CLASS) $(MAIN) | $(BINDIR)
	$(CC) $(CCFLAG) $^ -o $(TARGET)

bin/%.o: src/%.cpp inc/%.hpp
	$(CC) $(CCFLAG) $(INCFLAG) -c $< -o $@

$(MAIN): src/main.cpp
	$(CC) $(CCFLAG) $(INCFLAG) -c $< -o $@

BINDIR:
	mkdir -p ./bin
