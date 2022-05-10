SCRS =		checkargs.c checkoutput.c findpath.c ft_strstr.c readuntildelim.c \
			get_path.c main.c checkaccess.c cmdopt.c getcmdpath.c execute.c \
			run.c rundir.c handle_here_doc.c cmdopthd.c getcmdpathhd.c \
			redir.c handle_no_infile.c checkdelim.c error.c memfreecmd.c \
			memfreecmdpath.c

OBJS =		${SCRS:.c=.o}

CC =		gcc

LIBFT =		libft.a

LIBFTPATH =	libft/

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

NAME =		pipex

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${LIBFT}
			@${CC} ${CFLAGS} ${OBJS} ${LIBFTPATH}${LIBFT} -o ${NAME}

${LIBFT}:
			make -C ${LIBFTPATH} all
clean:
			${RM} ${OBJS}
			make -C ${LIBFTPATH} clean

fclean:		clean
			${RM} ${NAME} ${LIBFTPATH}${LIBFT}

re: clean all

.PHONY: all clean fclean re