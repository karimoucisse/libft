NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Werror -Wextra
CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c  ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c \
	ft_strdup.c ft_bzero.c ft_memset.c
OFILES = $(CFILES:.c=.o)
INCFILE = libft.h

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)
clean:
	$(RM) $(OFILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
