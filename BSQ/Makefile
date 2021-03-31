SRCS	= ${wildcard srcs/*.c}
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wextra -Wall -Werror
INCL	= include
NAME	= bsq

.c.o :	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCL}

${NAME} :	${OBJS}
			${CC} ${OBJS} -o ${NAME} 

all : 	${NAME}

clean : 
			rm -f ${OBJS}

fclean : 	clean
			rm -f ${NAME}

re : 		fclean all

.PHONY : 	all clean fclean re
