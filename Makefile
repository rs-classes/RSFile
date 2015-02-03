#this will command all the files
NAME = RSFileTest
CC = g++
all:
	$(CC) test.cpp RSFile.cpp -o $(NAME)
clean:
	rm -rf $(NAME)
