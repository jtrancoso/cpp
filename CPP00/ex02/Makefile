SRCS =	Account.cpp
		
OBJS = ${SRCS:.cpp=.o}
NAME = account
CFLAGS = -Werror -Wall -Wextra -std=c++98
CC = c++
RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			$(CC) -fsanitize=address ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean : 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		re all clean fclean