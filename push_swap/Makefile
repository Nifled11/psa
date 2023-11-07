NAME		=	push_swap

PROGRAM_DIR	=	main/
MOVES_DIR	=	moves/
UTILS_DIR	=	utils/
INC_DIR		=	inc/

PROGRAM_F	=	$(wildcard $(PROGRAM_DIR)*.c)
MOVES_F		=	$(wildcard $(MOVES_DIR)*.c)
UTILS_F		=	$(wildcard $(UTILS_DIR)*.c)
INC_F		=	push_swap.h

LIBFT		=	libft/libft.a

SRCS		=	${PROGRAM_F} ${MOVES_F} ${UTILS_F}
OBJS		=	$(patsubst %.c, %.o, $(SRCS))
RM 			=	rm -f
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -MMD -MP -I inc/ -I libft/
DEPS		=	$(patsubst %.c, %.d, $(SRCS))

all: make_libft ${NAME}

make_libft:
	@make -C libft/

${NAME}: ${OBJS} ${LIBFT}
	@${CC} ${CFLAGS} -L libft/ -lft ${OBJS} -o ${NAME}
	@echo "Make done!"

.c.o:
	@$(CC) ${CFLAGS} -c $< -o $@

clean:
	@echo "Clean ..."
	@${RM} ${OBJS}
	@${RM} ${DEPS}
	@make clean -C libft

fclean: clean
	@echo "Fclean ..."
	@${RM} ${NAME}
	@make fclean -C libft

re: fclean all
	@echo "Reset ..."

-include ${DEPS}

.PHONY: all clean fclean re
