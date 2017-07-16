INC=include
SRC=$(wildcard *.cpp)
DIR=$(notdir $(SRC))
OBJ=$(patsubst %.cpp,%.o,$(DIR))
HEADER= -I $(INC)

smart_test: $(OBJ)
	g++ -o $@ $^
$(OBJ):$(SRC)
	 g++ $(HEADER) -c $^


clean:
	rm *.o smart_test
