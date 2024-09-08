TARGET=demo21
CSRCS=$(TARGET).C
CSRCS+=demo21.C

COBJS=$(CSRC:.C=.O)
CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET):$(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^


%.O : %.c
	$(CC) $(CFLAGS) -C $<

run:
	./(TARGET)

.phony : run clean
