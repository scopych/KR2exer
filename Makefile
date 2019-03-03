CC = scan-build clang
FLAGS = -g -Wall -pedantic -std=c89 -o
BINARY = prntLim
SOURCE = prntLim.c

all: $(SOURCE)
	$(CC) $(FLAGS) $(BINARY) $(SOURCE)

copy:
	cp $(BINARY) ~/binKR 