OBJ_NAME = CthulluCharacterGenerator 
TEST_NAME = testRunner 
install:
	cd build; cmake ..; make

run:
	cd build; ./$(OBJ_NAME)

test:
	cd build; ./$(TEST_NAME)

