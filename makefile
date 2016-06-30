CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=src/Parser.cpp src/Register.cpp src/Symbol.cpp src/VM.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hayden

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean delete

clean:
	rm $(OBJECTS)

delete:
	rm $(OBJECTS) $(EXECUTABLE)