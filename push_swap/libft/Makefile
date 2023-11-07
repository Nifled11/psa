NAME	=	libft.a

SRC		=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlcpy.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_split.c \
			ft_printf.c \
			va_c.c \
			va_s.c \
			va_i_and_d.c \
			va_u.c \
			va_x_lower.c \
			va_x_upper.c \
			va_p.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJECTS	= $(SRC:%.c=%.o)

RM		=	rm -f
CC		=	@gcc
CFLAGS	=	-Wall -Werror -Wextra

$(NAME) : $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@echo "Libft Done!"

all: $(NAME)

clean:
	@${RM} $(OBJECTS)
	@echo "Clean libft..."

fclean: clean
	@${RM} ${NAME}
	@echo "Fclean libft..."

re: fclean all
	@echo "Reset libft ..."