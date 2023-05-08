SDIR=src/
ODIR=obj/
LDIR=lib/

CC=gcc
CFLAGS=-Wall -Werror -Wextra

NAME= libft.a
DEPS = $(LDIR)/libft.h



SRCS = $(wildcard $(SDIR)/ft_*.c)
OBJS = $(patsubst $(SDIR)/%.c, $(ODIR)/%.o, $(SRCS))

all : $(NAME)

$(ODIR)/%.o : $(SDIR)/%.c $(DEPS)
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(LDIR)

$(NAME) : $(OBJS)
	ar -rcs $@ $^

main: $(OBJS) $(NAME)
	$(CC) $(CFLAGS) -o $@ -L$(LDIR) -lft

clean :
	rm -f $(ODIR)/*.o

fclean : clean
	rm -f $(NAME) main

re : fclean all

.PHONY : all re clean fclean