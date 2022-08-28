OBJ=testlampe.o lampe.o led.o 

COMP=g++ 
INC =    -I.
INC+ = -I/usr/local/include
LIBDIR= -L/usr/local/lib

CFLAGS =
LDFLAGS2 = -lstdc++ -lc -lgcc
LDFLAGS1 = -lwiringPi -Wall -lpthread

all	: testlampe 

testlampe : $(OBJ)
	$(COMP) $(LDFLAGS1) -o testlampe led.o lampe.o testlampe.o $(LDFLAGS2) $(LIBDIR)

lampe.o : lampe.cpp lampe.h
	$(COMP) -c $(CFLAGS) $(INC) lampe.cpp
led.o : led.cpp led.h lampe.h
	$(COMP) -c $(CFLAGS) $(INC) led.cpp
testlampe.o : testlampe.cpp led.h lampe.h
	$(COMP) -c $(CFLAGS) $(INC) testlampe.cpp 