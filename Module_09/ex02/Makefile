SRCS		=	srcs/main.cpp		\
				srcs/PmergeMe.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	PmergeMe

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re