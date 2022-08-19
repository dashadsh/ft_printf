# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 23:36:52 by dgoremyk          #+#    #+#              #
#    Updated: 2022/08/19 16:24:55 by dgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = ft_printf.c \
	ft_write_char.c ft_write_str.c ft_write_int.c ft_write_unsigned_int.c \
	ft_write_ptr.c ft_write_hex.c ft_write_hex_upper.c

OBJ = $(SRC:.c=.o)

LIBFT_OBJ = libft/*.o

# creating libftprintf library including libft
# -C option is for running MAKE command on libft subfolder
$(NAME): $(OBJ)
	$(MAKE) -C libft
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

all: $(NAME)

clean:
	$(MAKE) clean -C libft
	$(RM) $(OBJ)
	
fclean: clean
	$(MAKE) fclean -C libft
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re