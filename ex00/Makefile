NAME = megaphone
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98 -pedantic-errors
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all, clean, fclean, re