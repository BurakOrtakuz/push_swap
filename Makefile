NAME = push_swap_library.a
FLAG = -Wall -Wextra -Werror
SRC = error_management.c \
		ft_split.c \
		push_swap.c \
		r_operators.c \
		rr_operators.c \
		s_p_operators.c \
		stack.c \
		utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o 
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean reerror_management.c	\
		ft_split.c	\
		push_swap.c	\
		r_operators.c	\
		rr_operators.c	\
		s_p_operators.c	\
		stack.c	\ 
		utils.c