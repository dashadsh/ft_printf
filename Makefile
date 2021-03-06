# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 23:36:52 by dgoremyk          #+#    #+#              #
#    Updated: 2022/07/20 10:51:29 by dgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = ft_printf.c format_c.c format_d_i.c format_p.c \
	format_s.c format_u.c format_x.c format_x_upper.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@$(RM) $(OBJ)
	
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re