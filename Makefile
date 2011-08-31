CFLAGS = -g -std=c99
CPP_EXECUTABLE = cpp
CPP_FILES = cpp.cc cpp.hh
C_EXECUTABLE = c
C_IMPL = c.c
C_HEADERS = c.h
C_FILES = $(C_HEADERS) $(C_IMPL)
EXECUTABLES = $(C_EXECUTABLE) $(CPP_EXECUTABLE)

all: c

c: $(C_FILES)
	$(CC) $(CFLAGS) -o $(C_EXECUTABLE) $(C_IMPL)

cpp:

$(C_FILES):

realclean: clean
	-rm -f $(EXECUTABLES)

clean:

