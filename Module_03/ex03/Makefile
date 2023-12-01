SRCS		=	srcs/main.cpp			\
				srcs/ClapTrap.cpp		\
				srcs/ScavTrap.cpp		\
				srcs/FragTrap.cpp		\
				srcs/DiamondTrap.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Werror -Wextra -std=c++98 #-Wshadow -Wno-shadow

NAME		=	diamondtrap

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re