PROJ=Python3Parser

CC=g++

CFLAGS=-std=c++11 -Wno-attributes

# Directory containing source files
SRC_DIR=.

# Directory containing header files
INC_DIR=include

# Directory containing libraries
LIB_DIR=lib

# Check if we are in WSL
ifeq ($(shell uname -r | cut -d'-' -f2),microsoft)
    LIBS=-lantlr4-runtime
else
    LIBS=-L$(LIB_DIR) -lantlr4-runtime
endif

$(PROJ): main.cpp $(SRC_DIR)/*.cpp
	$(CC) $(CFLAGS) -o $@ $^ -I$(INC_DIR) $(LIBS)

.PHONY: clean

clean:
	rm $(PROJ)
