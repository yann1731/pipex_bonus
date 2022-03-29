SCRS =		checkargs.c checkoutput.c findpath.c ft_split.c ft_strjoin.c ft_strjoinfree.c ft_strlen.c \
			ft_strstr.c get_path.c main.c substr.c checkaccess.c

OBJS =		${SCRS:.c=.o}

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${OBJS}
			${CC} ${CFLAGS} ${OBJS}

clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} a.out
re: clean all

.PHONY: all clean fclean re