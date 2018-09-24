GPP := g++
RM := rm -rf
SRCS := main.cpp
OBJS := $(SRCS:.c=.o)
NAME := my_cat

all: $(NAME)

$(NAME): $(OBJS)
	$(GPP) -o $(NAME) $(OBJS) -Wall -Wextra -Werror

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re fclean clean
