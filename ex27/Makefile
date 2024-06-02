# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 12:08:47 by okapshai          #+#    #+#              #
#    Updated: 2024/05/17 13:02:31 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
LFLAGS = -Wall -Werror -Wextra -o
SOURCE = ft_display_file.c
OBJS = $(patsubst %.c, %.o, $(SOURCE))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCE)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
