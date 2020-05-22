CC = g++
CFLAGS = -W -Wall
TARGET = School
Objects = IDno.o age.o sex.o main.o

all: $(TARGET)
	./$^

$(TARGET) : $(Objects)
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm *.o $(TARGET)
