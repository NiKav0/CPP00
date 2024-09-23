NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++ -Wall -Werror -Wextra  -std=c++98

all: $(NAME)

$(NAME):
	$(CPP) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
