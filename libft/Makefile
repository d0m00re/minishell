#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 18:24:12 by tribeiro          #+#    #+#              #
#    Updated: 2016/11/24 16:17:18 by tribeiro         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#################################################
### OPTION
##################################################

CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME=libft.a
SRC_PATH=srcs
SRC_M_LIBFT_PATH=s_ori
SRC_M_POINT_PATH=m_point
SRC_M_ERROR_PATH=m_error
SRC_M_2D_TAB_PATH=m_2d_tab_char
SRC_M_1D_INT_PATH=m_1d_int
OBJ_PATH=srcs
INC_PATH=includes
LIB_PATH=libft
INC=libft/includes

#################################################
### COLOR
##################################################

COL_BLACK		= \033[1;30m
COL_RED			= \033[1;31m
COL_GREEN		= \033[1;32m
COL_YELLOW		= \033[1;33m
COL_BLUE		= \033[1;34m
COL_PURPLE		= \033[1;35m
COL_WHITE		= \033[1;37m

#################################################
### SOURCES
##################################################

SRC_M_LIBFT=ft_atoi.c               ft_lstadd.c             ft_lstlast_last.c       ft_memcmp.c             ft_putnbr_fd.c          ft_strequ.c             ft_strnequ.c\
ft_bzero.c              ft_lstclear.c           ft_lstmap.c             ft_memcpy.c             ft_putstr.c             ft_striter.c            ft_strnew.c\
ft_file_exist.c         ft_lstcreate_elem.c     ft_lstnew.c             ft_memdel.c             ft_putstr_fd.c          ft_striteri.c           ft_strnstr.c\
ft_file_return_data.c   ft_lstdel.c             ft_lstpush_back.c       ft_memmove.c            ft_sqrt.c               ft_strjoin.c            ft_strrchr.c\
ft_file_size.c          ft_lstdelone.c          ft_lstpush_front.c      ft_memset.c             ft_strcat.c             ft_strlcat.c            ft_strsplit.c\
ft_isalnum.c            ft_lstextract_elem_id.c ft_lstpush_params.c     ft_number_of_line.c     ft_strchr.c             ft_strlen.c             ft_strstr.c\
ft_isalpha.c            ft_lstfind.c            ft_lstreverse.c         ft_putchar.c            ft_strclr.c             ft_strmap.c             ft_strsub.c\
ft_isascii.c            ft_lstforeach.c         ft_lstsize.c            ft_putchar_fd.c         ft_strcmp.c             ft_strmapi.c            ft_strtrim.c\
ft_isdigit.c            ft_lstforeach_if.c      ft_memalloc.c           ft_putendl.c            ft_strcpy.c             ft_strncat.c            ft_swap.c\
ft_isprint.c            ft_lstiter.c            ft_memccpy.c            ft_putendl_fd.c         ft_strdel.c             ft_strncmp.c            ft_tolower.c\
ft_itoa.c               ft_lstlast.c            ft_memchr.c             ft_putnbr.c             ft_strdup.c             ft_strncpy.c            ft_toupper.c\
ft_putstr_null.c ft_str_resize_concat.c ft_lstfind_id.c	ft_str_cut_includ_behind_sep.c ft_str_return_extract_line_behind_sep.c ft_lstpush_back_id.c get_next_line.c ft_itoa_base.c\
ft_putnbr_li.c ft_putnbr_l.c ft_putnbr_ll.c ft_putnbr_li_u.c ft_itoa_base_ui.c ft_itoa_base_li_uli.c  ft_putstr_utf8.c ft_putnbr_ui.c ft_putchar_uc.c ft_putchar_utf8.c ft_putchar_all_ascii.c\
ft_str2d_display.c ft_str2d_del.c ft_str_resize_concat_two_params.c ft_str_found_str_with_begin.c\
ft_str2d_found_id_with_begin_str.c\
ft_str_same_char.c ft_str2d_get_with_begin.c ft_str_replace_begin_str_by_another.c ft_str_create_with_two_strings.c\
ft_perror.c ft_putendl2_fd.c ft_str_extract_after_n_char.c\
ft_str2dlen.c ft_str2d_dup.c ft_str2d_incr_size_add_str.c ft_str2d_delete_elem_with_id.c ft_str2d_delete_elem_begin_with_string.c\
ft_str2d_add_elem_begin_with_key_string.c ft_str2d_extract_elem_with_str_begin.c ft_str2d_split_elem_with_str_begin.c\
ft_str2d_extract_substring.c ft_getenv.c ft_setenv.c ft_unsetenv.c\
ft_str_extract_after_sep.c ft_str_extract_before_sep.c\
ft_env_display.c ft_env_reset.c ft_str_transform_in_min.c ft_str_transform_in_maj.c\
ft_clear_buffer.c ft_read_standart_input.c ft_char_is_present.c ft_str_modif_after_end_sep.c\
ft_str_found_id_last_sep.c ft_str_delete_before_include_end_sep.c


SRC_M_POINT=ft_pts_destruct.c ft_pts_get_y.c  ft_pts_is_adj.c ft_pts_set_x_y.c ft_pts_to_string.c \
ft_pts_get_x.c ft_pts_init.c ft_pts_set_x.c  ft_pts_set_y.c

SRC_M_ERROR=ft_g_error_destruct.c ft_g_error_get_msg_with_id.c ft_g_error_set_error_with_id.c \
ft_g_error_display_all.c ft_g_error_init.c ft_g_error_set_msg_with_id.c \
ft_g_error_get_error_with_id.c ft_g_error_nb.c ft_g_error_valid_id.c ft_g_error_display_error_only.c ft_g_error_is_error.c

SRC_M_2D_TAB=ft_2d_tab_char_del_tab.c ft_2d_tab_char_del.c ft_2d_tab_char_destruct.c ft_2d_tab_char_init.c \
ft_2d_tab_char_generate_tab.c ft_2d_tab_char_init_tab_with_value.c ft_2d_tab_char_get_dim.c ft_2d_tab_char_set_dim.c \
ft_2d_tab_char_get_value_x_y.c ft_2d_tab_char_to_string.c ft_2d_tab_char_found_number_type_char.c

SRC_M_1D_INT=ft_1d_int_del.c ft_1d_int_get_len.c ft_1d_int_init.c ft_1d_int_malloc_tab.c ft_1d_int_set_value_with_id.c\
ft_1d_int_del_tab.c ft_1d_int_destruct.c ft_1d_int_get_tab.c ft_1d_int_init_values.c ft_1d_int_set_len.c ft_1d_int_to_string.c

#################################################
### OBJECT
##################################################

OBJ_M_LIBFT=$(patsubst %.c, %.o, $(SRC_M_LIBFT))
OBJ_M_POINT=$(patsubst %.c, %.o, $(SRC_M_POINT))
OBJ_M_ERROR=$(patsubst %.c, %.o, $(SRC_M_ERROR))
OBJ_M_2D_TAB=$(patsubst %.c, %.o, $(SRC_M_2D_TAB))
OBJ_M_1D_INT=$(patsubst %c, %o, $(SRC_M_1D_INT))

#################################################
### FORMAT PATH
##################################################

SRC_M_L=$(addprefix ./$(SRC_M_LIBFT_PATH)/, $(SRC_M_LIBFT))
SRC_M_P=$(addprefix ./$(SRC_M_POINT_PATH)/, $(SRC_M_POINT))
SRC_M_E=$(addprefix ./$(SRC_M_ERROR_PATH)/, $(SRC_M_ERROR))
SRC_M_2=$(addprefix ./$(SRC_2D_TAB_PATH)/, $(SRC_M_2D_TAB))
SRC_M_1=$(addprefix ./$(SRC_1D_M_INT_PATH)/, $(SRC_M_1D_INT))

OBJ_M_L=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_LIBFT))
OBJ_M_P=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_POINT))
OBJ_M_E=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_ERROR))
OBJ_M_2D=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_2D_TAB))
OBJ_M_1D=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_1D_INT))

OBJS = $(OBJ_M_L) $(OBJ_M_P) $(OBJ_M_E) $(OBJ_M_2D) $(OBJ_M_1D) $(OBJ_M_L)

#################################################
### RULES
##################################################

all: $(NAME)

$(NAME): $(OBJ_M_P) $(OBJ_M_E) $(OBJ_M_2D) $(OBJ_M_1D) $(OBJ_M_L)
	@ar rc $(NAME) $(OBJS)

$(OBJ_M_L): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_LIBFT_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : LIB ORI BITCH ] \n"
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_P): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_POINT_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : OBJ_M_P ] \n"
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(INC) -c $< -o $@

$(OBJ_M_E): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_ERROR_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : OBJ_M_E ] \n"
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I $(INC) -c $< -o $@

$(OBJ_M_2D): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_2D_TAB_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : TAB 2D CHAR] \n"
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I $(INC) -c $< -o $@

$(OBJ_M_1D): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_1D_INT_PATH)%.c
	@echo "$(COL_BLUE)[ COMPILE & ASSEMBLE STEPS : TAB 1D INT] \n"
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I $(INC) -c $< -o $@

clean:
	@echo "$(COL_YELLOW)[ CLEAN DIRECTORY ]\n"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(COL_YELLOW)[ CLEAN DIRECTORY AND $(NAME) ]\n"
	@rm -f $(NAME)

re: fclean all
