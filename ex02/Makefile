SRCS	= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJS	= ${SRCS:.cpp=.o}
CXX	= c++
RM	= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= frag

${NAME}: ${OBJS}
				${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all