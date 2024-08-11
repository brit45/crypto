CC=g++
STD=c++17
CFLAGS= -Wall
LIB=
SRC=src/main.cpp
OUT_PATH="build"
OUT=crypto


OBJ=$(SRC:.cpp=.o)


.PHONY: clean build install

#-------------------------------------------------------------------------------|

blob: $(OBJ)

#-------------------------------------------------------------------------------|


build: blob compile
#-------------------------------------------------------------------------------|

compile:

	@$(CC) $(CFLAGS) $(OBJ) -o $(OUT_PATH)/$(OUT)

