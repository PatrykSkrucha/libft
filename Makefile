NAME = libft.a
 CC = gcc
 CFLAGS = -Wall -Wextra -Werror
 AR = ar rcs
 RM = rm -f
 FILES = ft_memset \
		 ft_bzero \
		 ft_memcpy \
		 ft_memcpy \
		 ft_memmove \
		 ft_memchr \
		 ft_memcmp \
		 ft_strlen \
		 ft_strlcpy \
		 ft_strlcat \
		 ft_strchr \
		 ft_strnstr \
		 ft_strdup  \
		 ft_strncmp \
		 ft_atoi \
		 ft_isalpha \
		 ft_isdigit \
		 ft_isalnum \
		 ft_isascii \
		 ft_isprint \
		 ft_toupper \
		 ft_tolower \
		 ft_calloc \
		 ft_strrchr \
		 ft_substr \
		 ft_strjoin \
		 ft_putchar_fd \
		 ft_strmapi \
		 ft_putstr_fd \
		 ft_putendl_fd \
		 ft_putnbr_fd \
		 ft_striteri \
		 ft_itoa \
		 ft_strtrim \
		 ft_split \

 SRCS_DIR = ./
 SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
 OBJS_DIR = ./
 OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
 .c.o: $(SRCS)
	 $(CC) $(CFLAGS) -c -o $@ $<
 $(NAME): $(OBJS)
	 $(AR) $@ $^
 all: $(NAME)
 clean:
	 $(RM) $(OBJS) $(OBJS_B)
 fclean: clean
	 $(RM) $(NAME)
 re: clean all
 .PHONY: bonus all clean fclean re