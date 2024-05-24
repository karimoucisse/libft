NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Werror -Wextra
CFILES_SUP = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c
CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c  ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c \
	ft_strdup.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	ft_memmove.c ft_calloc $(CFILES_SUP)
OFILES = $(CFILES:.c=.o)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
%.o:%.c $(INCFILE)
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)
clean:
	$(RM) $(OFILES)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
