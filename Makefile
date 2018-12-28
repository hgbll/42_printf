# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 09:24:07 by hbally            #+#    #+#              #
#    Updated: 2018/12/22 15:44:54 by hbally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

SRCSDIR   			=	srcs

SRCS				:=	$(SRCSDIR)/ft_printf.c				\
						$(SRCSDIR)/printers.c				\
						$(SRCSDIR)/parser_checks.c			\
						$(SRCSDIR)/parser.c					\
						$(SRCSDIR)/dispatcher.c				\
						$(SRCSDIR)/baker_char.c				\
						$(SRCSDIR)/baker_integers.c			\
#						$(SRCSDIR)/baker_double.c

OBJSDIR   			=	objs

OBJS				:=	$(SRCS:$(SRCSDIR)/%.c=$(OBJSDIR)/%.o)

DEPENDENCIES		=	$(OBJS:%.o=%.d)

INCLUDES			=	-I libft/includes 					\
						-I includes							\

CC					=	gcc

CFLAGS				+=	-Wall -Werror -Wextra

all					:	$(NAME)

.PHONY				:	libs
libs				:
						make -C libft

$(NAME)				: 	libs $(OBJS)
						cp libft/libft.a $@
						ar rc $@ $(OBJS)
						ranlib $@

-include $(DEPENDENCIES)

$(OBJS)				: 	$(OBJSDIR)/%.o : $(SRCSDIR)/%.c
						@mkdir -p objs
						$(CC) -o $@ $(CFLAGS) $(INCLUDES) -MMD -c $<

.PHONY				:	clean
clean				:
						rm -f $(OBJS) $(DEPENDENCIES)
						rm -rf $(OBJSDIR)
						make clean -C libft/

.PHONY				:	fclean
fclean				:	clean
						rm -f $(NAME)
						make fclean -C libft/

.PHONY				:	re
re					:	fclean all
