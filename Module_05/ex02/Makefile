SRCS		=	srcs/main.cpp						\
				srcs/Bureaucrat.cpp					\
				srcs/AForm.cpp						\
				srcs/ShrubberyCreationForm.cpp		\
				srcs/RobotomyRequestForm.cpp		\
				srcs/PresidentialPardonForm.cpp		\
				

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

RM			=	rm -f

FLAGS		=	-Wall -Werror -Wextra -std=c++98

NAME		=	prog

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