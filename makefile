# Object files
OBJ_STUDENT = $(SRC_STUDENT:.c=.o)
OBJ_GRADE = $(SRC_GRADE:.c=.o)

# Executable names
EXEC_STUDENT = student

# Default target
all: $(EXEC_STUDENT)

# Compile student program
$(EXEC_STUDENT): $(OBJ_STUDENT) $(OBJ_GRADE)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean target
clean:
	rm -f $(OBJ_STUDENT) $(OBJ_GRADE) $(EXEC_STUDENT)
