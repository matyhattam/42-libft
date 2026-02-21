SRCS = srcs/
LIB = libft.a

all:
	clang -Wall -Wextra -Wextra -c ${SRCS}*.c 
	ar rcs ${LIB} *.o

clean:
	rm -f *.o 

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re