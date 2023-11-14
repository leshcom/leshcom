CPP = g++
CPPFLAGS = -fPIC
TARGET =  test.bin
OBJS = Database.o Employee.o Position.o UserInterface.o
DYLIB = Lib.so


$(TARGET): $(OBJS) $(DYLIB)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS) -L. -Iworld -Wl,-rpath,.
	
$(DYLIB): $(OBJS)
	$(CPP) -shared -o $(DYLIB) $(OBJS)
	
Database.o: Database.cpp 
	$(CPP) $(CPPFLAGS) -c Database.cpp -o Database.o

Employee.o: Employee.cpp 
	$(CPP) $(CPPFLAGS) -c Employee.cpp -o Employee.o

Position.o: Position.cpp 
	$(CPP) $(CPPFLAGS) -c Position.cpp -o Position.o

UserInterface.o: UserInterface.cpp 
	$(CPP) $(CPPFLAGS) -c UserInterface.cpp -o UserInterface.o

clean:
	rm -f *.o *.so $(TARGET)