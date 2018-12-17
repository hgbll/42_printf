# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:24:07 by hbally            #+#    #+#              #
#    Updated: 2018/12/17 13:52:46 by hbally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	test

BINDIR				=	.

SRCSDIR   			=	srcs

SRCS			   :=	$(SRCSDIR)/main.c					\

OBJSDIR   			=	objs

OBJS  			   :=	$(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

DEPENDENCIES		= 	$(OBJS:%.o=%.d)

INCLUDES			=   -I ../libft/includes 				\
						-I includes							\

LIBS				=	-L ../libft/ -lft					\

CFLAGS			   +=	-Wall -Werror -Wextra

CC					=	gcc

all					:	$(BINDIR)/$(NAME)

$(BINDIR)/$(NAME)	: 	$(OBJS)
						make -C libft/
						ar rc $@ $(OBJS)

-include $(DEPENDENCIES)

$(OBJS)				: 	$(OBJSDIR)/%.o : $(SRCSDIR)/%.c
						mkdir -p objs
						$(CC) $(CFLAGS) $(INCLUDES) $(LIBS) -MMD -c $< -o $@

.PHONY				:	clean
clean				:
						rm -f $(OBJS) $(DEPENDENCIES)
						rm -rf $(OBJSDIR)
						make clean -C libft/

.PHONY				:	fclean
fclean				:	clean
						rm -f $(BINDIR)/$(NAME)
						make fclean -C libft/

re					:	fclean all
