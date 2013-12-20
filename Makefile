##
## Makefile for Makefile in /home/chapui_s/travaux/my_printf/new
## 
## Made by chapui_s
## Login   <chapui_s@epitech.net>
## 
## Started on  Sun Nov 17 13:15:52 2013 chapui_s
## Last update Fri Dec 20 23:50:19 2013 Sebastien Chapuis
##

SRC	= my_printf.c \
	  calc_size.c \
	  print_int.c \
	  print_str.c \
	  print_large_hexa.c \
	  print_uint.c \
	  check.c \
	  print_all_str.c \
	  print_little_hexa.c \
	  save_chars_written.c \
	  init_struc.c \
	  print_binary.c \
	  print_octal.c \
	  stock_args.c \
	  print_char.c \
	  print_ptr.c \
	  utils.c

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f $(OBJ)

re:	fclean all

