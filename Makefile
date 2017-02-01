# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alhelson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/15 19:36:28 by alhelson          #+#    #+#              #
#    Updated: 2016/12/15 19:36:29 by alhelson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Wextra -Werror
LIB_PATH=libft
INC=includes
INC_PATH= ./$(LIB_PATH)/$(INC)
NAME= minishell
LIB_PATH= libft
BIN_PATH= bin

SRC_PATH=srcs
OBJ_PATH=srcs

SRC_M_PARSER_PATH=m_parser
SRC_M_INPUT_PATH=m_input
SRC_M_BUILTIN_PATH=m_builtin
SRC_M_LAUNCH_PATH=m_launch
SRC_M_TOOL_PATH=m_tool

#################################################
### COLOR
##################################################
COL_BLACK	= \033[1;30m
COL_RED		= \033[1;31m
COL_GREEN	= \033[1;32m
COL_YELLOW	= \033[1;33m
COL_BLUE	= \033[1;34m
COL_PURPLE	= \033[1;35m
COL_WHITE	= \033[1;37m

################################################
### SOURCES
###############################################
SRC_M_PARSER= ft_main_parser.c ft_parser.c ft_extract_every_part.c ft_spe_sep.c
SRC_M_INPUT=ft_main_input.c
SRC_M_BUILTIN=ft_builtin_cd.c       ft_builtin_echo.c     ft_builtin_env.c      ft_builtin_exit.c     ft_builtin_setenv.c   ft_builtin_unsetenv.c ft_is_builtin.c
SRC_M_LAUNCH=ft_launch_exe_bin.c ft_launch_builtin.c ft_found_path_for_bin.c ft_launch_main.c ft_launch_step.c
SRC_M_TOOL=ft_catch_sg.c  ft_init_sg.c

SRC_M_P	= $(addprefix ./$(SRC_M_PARSER_PATH)/, $(SRC_M_PARSER))
SRC_M_I	= $(addprefix ./$(SRC_M_INPUT_PATH)/, $(SRC_M_INPUT))
SRC_M_B = $(addprefix ./$(SRC_M_BUILTIN_PATH)/, $(SRC_M_BUILTIN))
SRC_M_L = $(addprefix ./$(SRC_M_LAUNCH_PATH)/, $(SRC_M_LAUNCH))
SRC_M_T = $(addprefix ./$(SRC_M_TOOL_PATH)/, $(SRC_M_TOOL))

###############################################
### OBJECT
##############################################
OBJ_M_PARSER= $(patsubst %.c, %.o, $(SRC_M_PARSER))
OBJ_M_INPUT= $(patsubst %.c, %.o, $(SRC_M_INPUT))
OBJ_M_BUILTIN= $(patsubst %.c, %.o, $(SRC_M_BUILTIN))
OBJ_M_LAUNCH= $(patsubst %.c, %.o, $(SRC_M_LAUNCH))
OBJ_M_TOOL= $(patsubst %.c, %.o, $(SRC_M_TOOL))

OBJ_M_P= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_PARSER))
OBJ_M_I= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_INPUT))
OBJ_M_B= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_BUILTIN))
OBJ_M_L= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_LAUNCH))
OBJ_M_T= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_TOOL))
OBJ_ALL= $(OBJ_M_P) $(OBJ_M_I) $(OBJ_M_B) $(OBJ_M_L) $(OBJ_M_T)

####################################################
#################### RULES ########################
all: $(NAME)

$(NAME): lib $(OBJ_M_P) $(OBJ_M_I) $(OBJ_M_B) $(OBJ_M_L) $(OBJ_M_T)
	@gcc -c main.c -I $(INC) -I $(INC_PATH)
	@$(CC) $(CFLAGS) main.o $(OBJ_M_P) $(OBJ_M_I) $(OBJ_M_L) $(OBJ_M_B) $(OBJ_M_T) -I $(INC) -I $(INC_PATH) -L $(LIB_PATH) -lft -o $(NAME)

$(OBJ_M_P): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_PARSER_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_I):$(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_INPUT_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_B):$(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_BUILTIN_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_L):$(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_LAUNCH_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_T):$(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_TOOL_PATH)%.c
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

lib:
	@cd $(LIB_PATH) && make

clean: cleanlib
	@rm -rf $(OBJ_ALL) main.o

cleanlib:
	@cd $(LIB_PATH) && make clean
	@echo "$(COL_WHITE)[ CLEAN LIBFT ]\n"

fclean: fcleanlib clean
	@rm -rf $(NAME)

fcleanlib: cleanlib
	@cd $(LIB_PATH) && make fclean
	@echo "$(COL_WHITE)[ FCLEAN LIBFT ]\n"

re: fclean all
