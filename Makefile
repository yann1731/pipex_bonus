SCRS_B =	checkargs_bonus.c checkoutput_bonus.c findpath_bonus.c readuntildelim_bonus.c \
			get_path_bonus.c main_bonus.c checkaccess_bonus.c cmdopt_bonus.c getcmdpath_bonus.c execute_bonus.c \
			run_bonus.c rundir_bonus.c handle_here_doc_bonus.c cmdopthd_bonus.c getcmdpathhd_bonus.c \
			redir_bonus.c handle_no_infile_bonus.c checkdelim_bonus.c error_bonus.c \
			handle_in_out_bonus.c freeall_bonus.c freecmd_bonus.c freesplit_bonus.c gnl_bonus.c \
			procwait_bonus.c checkargshd_bonus.c procwaithd_bonus.c

SRCS =		checkoutput_bonus.c findpath_bonus.c \
			get_path_bonus.c checkaccess_bonus.c cmdopt_bonus.c getcmdpath_bonus.c  \
			run_bonus.c rundir_bonus.c checkargsman.c \
			redir_bonus.c handle_no_infile_bonus.c error_bonus.c \
			handle_in_out_bonus.c freeall_bonus.c freecmd_bonus.c freesplit_bonus.c \
			procwait_bonus.c procwaithd_bonus.c executeman.c main.c

OBJS_B =	${SCRS_B:.c=.o}

OBJS =		${SRCS:.c=.o}

CC =		gcc

LIBFT =		libft.a

LIBFTPATH =	libft/

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

NAME =		pipex

all:		${NAME}

bonus:		${OBJS_B} ${LIBFT}
			@${CC} ${CFLAGS} ${OBJS_B} ${LIBFTPATH}${LIBFT} -o ${NAME}

.c.o:
			${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${LIBFT}
			@${CC} ${CFLAGS} ${OBJS} ${LIBFTPATH}${LIBFT} -o ${NAME}

${LIBFT}:
			make -C ${LIBFTPATH} all

asm:
			${CC} -S ${SCRS_B}

push:
			git add *.c *.h Makefile
			git commit -m "let's go"
			git push origin master

clean:
			@${RM} ${OBJS} ${OBJS_B}
			@make -C ${LIBFTPATH} clean

fclean:		clean
			@${RM} ${NAME} ${LIBFTPATH}${LIBFT} ${OBJS} ${OBJS_B}

cleanasm:
			${RM} *.s

re: clean all

.PHONY: all clean fclean re