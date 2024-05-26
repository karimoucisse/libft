NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Werror -Wextra
BONUS_CFILES = ft_lstnew_bonus.c
SUP_CFILES = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
	ft_strmapi.c ft_striteri.c
CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c  ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c \
	ft_strdup.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	ft_memmove.c ft_calloc.c $(SUP_CFILES)
OFILES = $(CFILES:.c=.o)
BONUS_OFILES = $(BONUS_CFILES:_bonus.c=.o)

bonus: $(BONUS_OFILES)
	ar rcs bonus $(BONUS_OFILES)
%.o:%_bonus.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)
clean:
	$(RM) $(OFILES)
	$(RM) $(BONUS_CFILES)
fclean: clean
	$(RM) $(NAME)
	$(RM) bonus
re: fclean all
.PHONY: all clean fclean re
