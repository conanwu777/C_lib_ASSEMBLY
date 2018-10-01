NAME = libfts.a

FILENAMES = \
libfts/ft_bzero.s\
libfts/ft_cat.s\
libfts/ft_isalnum.s\
libfts/ft_isalpha.s\
libfts/ft_isascii.s\
libfts/ft_isdigit.s\
libfts/ft_isprint.s\
libfts/ft_memcpy.s\
libfts/ft_memset.s\
libfts/ft_print_binary.s\
libfts/ft_putbbyte.s\
libfts/ft_putchar.s\
libfts/ft_putnbr.s\
libfts/ft_puts.s\
libfts/ft_strcat.s\
libfts/ft_strdup.s\
libfts/ft_strlen.s\
libfts/ft_strnew.s\
libfts/ft_tolower.s\
libfts/ft_toupper.s

ASM = ~/.brew/Cellar/nasm/2.13.03/bin/nasm -f macho64
OBJECTS = $(FILENAMES:%.s=%.o)

all: $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.s
	$(ASM) $< -o $@