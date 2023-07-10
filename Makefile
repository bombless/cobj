SRC = ./entry.c
EXEC = ./exec

build:
	cc $(SRC) -o $(EXEC)
run: $(SRC)
	$(EXEC)
all: run
