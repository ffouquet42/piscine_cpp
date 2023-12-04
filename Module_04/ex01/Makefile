SRCS		=	srcs/main.cpp			\
				srcs/Animal.cpp			\
				srcs/Cat.cpp			\
				srcs/Dog.cpp			\
				srcs/WrongAnimal.cpp	\
				srcs/WrongCat.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	animal

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re