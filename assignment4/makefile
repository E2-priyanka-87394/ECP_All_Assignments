
# % - stem
# Automatic variables
# $@ - Automatically resolves to the target of specified rule
# $^ - Automatically resolves to the list of all dependancies
# $< - Automatically resolves to the first/corresponding dependancy

TARGET=A1

CSRCS= $(TARGET).c 
COBJS= $(CSRCS:.c=.o)

CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET): $(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET)

clean:
	rm $(TARGET) $(COBJS)

.phony: run clean



