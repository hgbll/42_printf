# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:24:07 by hbally            #+#    #+#              #
#    Updated: 2018/12/17 13:28:52 by hbally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

BINDIR				=	.

SRCSDIR   			=	srcs

SRCS			   :=	$(SRCSDIR)/main.c					\
						$(SRCSDIR)/printf.c					\
						

OBJSDIR   			=	objs

OBJS  			   :=	$(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

DEPENDENCIES		= 	$(OBJS:%.o=%.d)

INCLUDES			=   -I libft/includes 					\
						-I includes							\
						-I minilibx_macos

LIBS				=	-L libft/ -lft						\
						-L minilibx_macos/ -lmlx 			\
						-framework OpenGL					\
						-framework AppKit

CFLAGS			   +=	-Wall -Werror -Wextra

CC					=	gcc

all					:	$(BINDIR)/$(NAME)

$(BINDIR)/$(NAME)	: 	$(OBJS)
						make -C minilibx_macos/
						make -C libft/
						$(CC) -o $@ $(CFLAGS) $(INCLUDES) $(LIBS) $(OBJS)

-include $(DEPENDENCIES)

$(OBJS)				: 	$(OBJSDIR)/%.o : $(SRCSDIR)/%.c
						mkdir -p objs
						$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

.PHONY				:	clean
clean				:
						rm -f $(OBJS)
						rm -f $(DEPENDENCIES)
						rm -rf $(OBJSDIR)
						make clean -C minilibx_macos/
						make clean -C libft/

.PHONY				:	fclean
fclean				:	clean
						rm -f $(BINDIR)/$(NAME)
						make fclean -C libft/

re					:	fclean all
