NAME = ex02
CC = c++ -std=c++98
CFLAGS =  

SRC = main.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp Array.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all