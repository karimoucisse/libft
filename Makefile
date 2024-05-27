NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Werror -Wextra
BONUS_CFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
SUP_CFILES = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
	ft_strmapi.c ft_striteri.c
CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c  ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_strnstr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c \
	ft_strdup.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
	ft_memmove.c ft_calloc.c $(SUP_CFILES) $(BONUS_CFILES)
OFILES = $(CFILES:.c=.o)

all: $(NAME)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)
bonus: $(OFILES)
	ar rcs bonus $(OFILES)
clean:
	$(RM) $(OFILES)
fclean: clean
	$(RM) $(NAME)
	$(RM) bonus
re: fclean all
.PHONY: all clean fclean re
