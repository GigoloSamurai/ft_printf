SRCS =

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

LIBFT_DIR = ./libft
LIBFT = ${LIBFT_DIR}/libft.a
NAME = libftprintf.a

all:	${NAME}

${NAME}:	${LIBFT} ${OBJS}
	cp ${LIBFT} ${NAME}
	${AR} ${NAME} ${OBJS}

${LIBFT}:
	make -C ${LIBFT_DIR}

clean:
	make -C ${LIBFT_DIR} clean
	${RM} ${OBJS}

fclean:	clean
	make -C  ${LIBFT_DIR} fclean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re libft