SRC = $(wildcard Core/* .c) $(wildcard Main/* .c)

OBJ = $(SRC:.c=.o)

exe: $(OBJ)
	 $(CC) -o $@ $^

clean:
	rm -f $(OBJ) exe
