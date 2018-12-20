# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:24:07 by hbally            #+#    #+#              #
#    Updated: 2018/12/20 15:15:21 by hbally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

BINDIR				=	.

SRCSDIR   			=	srcs

SRCS			   :=	$(SRCSDIR)/ft_printf.c				\
						$(SRCSDIR)/printer.c				\
						$(SRCSDIR)/parser.c

OBJSDIR   			=	objs

OBJS  			   :=	$(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

DEPENDENCIES		=	$(OBJS:%.o=%.d)

INCLUDES			=	-I libft/includes 					\
						-I includes							\

CC					=	gcc

CFLAGS			   +=	-Wall -Werror -Wextra

all					:	libs $(BINDIR)/$(NAME)

.PHONY				:	libs
libs				:
						make -C libft

$(BINDIR)/$(NAME)	: 	$(OBJS)
						cp libft/libft.a $@
						ar rc $@ $(OBJS)
						ranlib $@

-include $(DEPENDENCIES)

$(OBJS)				: 	$(OBJSDIR)/%.o : $(SRCSDIR)/%.c
						mkdir -p objs
						$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

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
