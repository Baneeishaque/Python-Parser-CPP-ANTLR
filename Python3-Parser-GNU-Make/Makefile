PROJ=Python3Parser

CC=g++

CFLAGS=-std=c++11 -Wno-attributes

# Directory containing source files
SRC_DIR=.

# Directory containing header files
INC_DIR=include

# Directory containing libraries
LIB_DIR=lib

$(PROJ): main.cpp $(SRC_DIR)/*.cpp
	$(CC) $(CFLAGS) -o $@ $^ -I$(INC_DIR) -L$(LIB_DIR) -lantlr4-runtime

.PHONY: clean

clean:
	rm $(PROJ)
