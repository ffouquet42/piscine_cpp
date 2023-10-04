SRCS		=	srcs/main.cpp		\
				srcs/display.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	phonebook

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re