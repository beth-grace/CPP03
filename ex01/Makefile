CC = CC
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = ClapTrap
SOURCES = ClapTrap.cpp ScavTrap.cpp main.cpp\

OBJECTS = $(SOURCES:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re