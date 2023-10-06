NAME = libft.a 
CCW = gcc -Wall -Wextra -Werror
OBJS = *.o
FILES = *.c

all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
$(OBJS): $(FILES)
	$(CCW) -c *.c
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf exec.out libft.a
re: fclean
	$(MAKE) all
exec: all
	$(CCW) main.c $(NAME) -o exec.out