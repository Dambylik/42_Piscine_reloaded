# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 13:14:41 by okapshai          #+#    #+#              #
#    Updated: 2024/05/16 16:00:57 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
SRC_DIR := ./srcs/
SRC_FILES := ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER := -I includes/
LIBC := ar rc
LIBR := ranlib
RM := rm -f

all: obj $(NAME)

obj: $(SRCS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re