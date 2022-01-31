SRCS =	main.cpp animal.cpp dog.cpp cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = test
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CC = clang++
RM = rm -f

.c.o:
		${CC} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			$(CC) -fsanitize=address ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean : 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		re all clean fclean