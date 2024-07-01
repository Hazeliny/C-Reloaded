# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linyao <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 16:59:36 by linyao            #+#    #+#              #
#    Updated: 2024/06/07 17:04:23 by linyao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile for libft.a

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

#Default target
all: $(NAME)
#Compile the library
$(NAME): $(OBJS)
	@echo "Creating $(NAME)..."
	ar rcs $(NAME) $(OBJS)
	@echo "$(NMAE) created successfully!"

#Rule to compile .c files into .o files
%.o: %.c
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#Clean up object files
clean:
	@echo "CLeaning up object files..."
	rm -f $(OBJS)

#Clean up object files and the library
fclean: clean
	@echo "Cleaning up $(NAME)..."
	rm -f $(NAME)

#Rebuild everything
re: fclean all

.PHONY: all clean fclean re
