SRCS =	megaphone.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = megaphone
CXXFLAGS = -Werror -Wall -Wextra -std=c++98
CC = clang++
RM = rm -f

.c.o:
		gcc ${CXXFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			$(CC) ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean : 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		re all clean fclean