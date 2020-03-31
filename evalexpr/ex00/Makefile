# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalliar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/09 23:55:29 by amalliar          #+#    #+#              #
#    Updated: 2020/03/31 08:34:54 by amalliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define DEFAULT_GOAL environment variable to build
# the required version of the program.
ifeq ($(DEFAULT_GOAL), debug)
    .DEFAULT_GOAL := debug
else
    .DEFAULT_GOAL := all
endif

SHELL := /bin/sh
CC := gcc
CFLAGS := -g -pipe -I./include
NAME := eval_expr

OBJDIR := obj
SRCDIR := src
DEPDIR := $(OBJDIR)/.dep

SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
DEPS := $(SRCS:$(SRCDIR)/%.c=$(DEPDIR)/%.d)

# Protect against make incorrectly setting 'last modified'
# attribute when running in parallel (-j flag).
POST_COMPILE = mv -f $(DEPDIR)/$*.tmp $(DEPDIR)/$*.d && touch $@

.DELETE_ON_ERROR:

.PHONY: all
all: CFLAGS += -w -march=native -O2 -flto
all: $(NAME)

.PHONY: debug
debug: CFLAGS += -Wall -Wextra -Werror -fdiagnostics-color
debug: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(DEPDIR)/%.d | $(DEPDIR)
	$(CC) $(CFLAGS) -MMD -MF $(DEPDIR)/$*.tmp -c $< -o $@
	@$(POST_COMPILE)

$(DEPDIR)/%.d: ;

$(DEPDIR): ; @mkdir -p $@

.PHONY: clean
clean:
	-rm -rf $(DEPDIR)
	-rm -rf $(OBJDIR)

.PHONY: fclean
fclean: clean
	-rm -f $(NAME)

.PHONY: re
re: 
	@$(MAKE) fclean
	@$(MAKE) $(.DEFAULT_GOAL)

# Do not include .d files if the current goal is set to
# clean/fclean/re.
ifeq ($(findstring $(MAKECMDGOALS), clean fclean re),)
    -include $(DEPS)
endif
