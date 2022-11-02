NAME= libftprintf.a
CC= cc
CFALGC=	-Wall -Wextra -Werror

FCT_PRINT=	ft_printf.c	\
ft_printnum.c	\
ft_printstr.c	\
ft_unsigned.c	\

FCT_O=	$(FCT_PRINT:.c=.o)

all: $(NAME)

$(NAME): $(FCT_O)
	ar rc $(NAME) $(FCT_O)

%.o:	%.c
	$(CC) $(CFALGC) -c $?

clean:
	rm -f $(FCT_O)

fclean:	clean
	rm -f $(NAME)

re: fclean all