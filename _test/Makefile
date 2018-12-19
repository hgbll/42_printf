# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:24:07 by hbally            #+#    #+#              #
#    Updated: 2018/12/19 16:16:24 by hbally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	test

BINDIR				=	.

SRCSDIR   			=	srcs

SRCS			   :=	$(SRCSDIR)/main.c					\
						$(SRCSDIR)/test_string.c			\
						$(SRCSDIR)/test_int.c

OBJSDIR   			=	objs

OBJS  			   :=	$(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

DEPENDENCIES		=	$(OBJS:%.o=%.d)

INCLUDES			=	-I includes							\
						-I ../libft/includes

LIBS				=	-L ../ -lftprintf					\

CC					=	gcc

CFLAGS			   +=	-g

all					:	libs $(BINDIR)/$(NAME)

.PHONY				:	libs
libs				:
						make -C ../

.PHONY				:	run
run					:	all
						./test

$(BINDIR)/$(NAME)	: 	$(OBJS)
						$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS)

-include $(DEPENDENCIES)

$(OBJS)				: 	$(OBJSDIR)/%.o : $(SRCSDIR)/%.c
						mkdir -p objs
						$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

.PHONY				:	clean
clean				:
						rm -f $(OBJS) $(DEPENDENCIES)
						rm -rf $(OBJSDIR)
						make clean -C ../

.PHONY				:	fclean
fclean				:	clean
						rm -f $(BINDIR)/$(NAME)
						make fclean -C ../

re					:	fclean all
