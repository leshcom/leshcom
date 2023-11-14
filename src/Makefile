CPP = g++
CPPFLAGS = -Wall -g
TARGET =  test.bin
OBJS = Database.o Employee.o Position.o UserInterface.o
STLIB = Lib.a


$(TARGET): $(OBJS) $(STLIB)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS) -L. -I: $(STLIB)

$(STLIB): $(OBJS)
	ar cr $(STLIB) $(OBJS)
	
Database.o: Database.cpp 
	$(CPP) $(CPPFLAGS) -c Database.cpp -o Database.o

Employee.o: Employee.cpp 
	$(CPP) $(CPPFLAGS) -c Employee.cpp -o Employee.o

Position.o: Position.cpp 
	$(CPP) $(CPPFLAGS) -c Position.cpp -o Position.o

UserInterface.o: UserInterface.cpp 
	$(CPP) $(CPPFLAGS) -c UserInterface.cpp -o UserInterface.o

clean:
	rm -f *.o *.a $(TARGET)
