/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ori.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:03:18 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 18:38:09 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ORI_H
# define FT_ORI_H

/*
**	typedef	unsigned long size_t;
*/
# include <string.h>

# define BUFF_SIZE 32
# define MAX_SIZE 200

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

void					ft_perror(char *str);

int						ft_clear_buffer(void);

/*
**	delete all texte before last sep + 1
*/
void					ft_str_delete_before_include_end_sep\
						(char *str, char sep);

/*
** add zero after sep and add zero ;)
*/
void					ft_str_modif_after_end_sep(char *str, char sep);

/*
** found pos last sep
** -1 : error : other : good
*/
int						ft_str_found_id_last_sep(char *str, int sep);

int						ft_char_is_present(char *str, char c);

char					*ft_read_standart_input(void);

void					ft_env_display(void);

void					ft_env_reset(void);

void					ft_str_transform_in_min(char *str);

void					ft_str_transform_in_maj(char *str);

char					*ft_str_extract_before_sep(char *str, char sep);

char					*ft_str_extract_after_sep(char *str, char sep);

char					*ft_getenv(const char *name);

int						ft_setenv(const char *name, const char *value,\
						int overwrite);

int						ft_unsetenv(const char *name);
/*
** extract element of <begin> at <end>
*/
char					**ft_str2d_extract_substring(char **str, int begin,\
						int end);

/*
**found str begin in str2d
** and format with split
*/

char					**ft_str2d_split_elem_with_str_begin(char **arge,\
						char *str, char sep);

/*
** found  a sring with begin string
*/
char					*ft_str2d_extract_elem_with_str_begin(char **arge,\
						char *str);

/*
** add elem or mmodif if exist
*/
int						ft_str2d_add_elem_begin_with_key_string(char ***str,\
						char **key, char **value);

/*
** delete elem with id
** success : 1
** fail : 0
*/

int						ft_str2d_delete_elem_with_id(char ***str, int id);

/*
** delete elem begin string
** success : 1
** fail : 0
*/

int						ft_str2d_delete_elem_begin_with_string(char ***str,\
						char *to_found);

/*
** size 2d tab
*/
int						ft_str2dlen(char **tab);

char					**ft_str2d_dup(char **tab);

/*
** tab to resize
** str : string to add
** incr one size
*/

int						ft_str2d_incr_size_add_str(char ***tab, char *str);

/*
** extract string after n char (5);
** coucou= john est la
** john est la
*/
char					*ft_str_extract_after_n_char(char const *str, int nb);

/*
** concat two string a return a new string
*/
char					*ft_str_create_with_two_strings(char *s1, char *s2);

/*
** str = "coucou=john"
** by  = "rage"
** delim = '='
** str = ragecoucou
*/
int						ft_str_replace_begin_str_by_another(char **str,\
						char *by, char delim);

char					*ft_str2d_get_with_begin(char **str, char *found);

/*
** str = [to_found]str <--- 1
** else 0
*/
int						ft_str_found_str_with_begin(char *str, char *to_found);

int						ft_str2d_found_id_with_begin_str(char **argv,\
						char *to_found);

int						ft_str_same_char(char *str, char c);

void					ft_str_resize_concat_two_params(char **str, char *s1,\
						char *s2);

void					ft_str2d_display(char **str);

void					ft_str2d_del(char ***str);

char					*ft_itoa_base(int n, int base);

char					*ft_itoa_base_ui(unsigned int n, int base);

char					*ft_itoa_base_li_uli(long int n, int base);

int						get_next_line(const int fd, char **line);

char					*ft_str_return_extract_line_behind_sep\
						(char *str, char c);

void					ft_str_cut_includ_behind_sep(char *str, char c);

int						ft_str_resize_concat(char **str, char *cp);

int						ft_sqrt(int nb);

char					**ft_strsplit(char const *s, char c);

void					*ft_memset(void *b, int c, size_t len);

void					*ft_memcpy(void *dst, const void *src, size_t n);

void					*ft_memccpy
						(void *dst, const void *src, int c, size_t n);

void					*ft_memchr(const void *s, int c, size_t n);

void					*ft_memmove(void *dst, const void *src, size_t n);

int						ft_memcmp(const void *s1, const void *s2, size_t n);

void					ft_bzero(void *s, size_t n);

void					ft_putchar(char c);

void					ft_putchar_uc(unsigned char c);

void					ft_putchar_all_ascii(unsigned char c);

void					ft_putchar_utf8(int c);

void					ft_putstr(char const *s);

void					ft_putstr_utf8(int const *tab);

void					ft_putstr_null(char const *s);

void					ft_putnbr(int nb);

void					ft_putnbr_ui(unsigned int nb);

void					ft_putnbr_li(long int nb);

void					ft_putnbr_li_u(unsigned long int nb);

void					ft_putnbr_l(long nb);

void					ft_putnbr_ll(long long nb);

int						ft_atoi(const char *str);

void					ft_swap(int *a, int *b);

size_t					ft_strlen(const char *s);

char					*ft_strdup(const char *s1);

char					*ft_strcpy(char *dst, const char *src);

char					*ft_strncpy(char *dest, const char *src, size_t n);

char					*ft_strncat(char *s1, const char *s2, size_t n);

char					*ft_strcat(char *s1, const char *s2);

size_t					ft_strlcat(char *dst, const char *src, size_t size);

char					*ft_strchr(const char *s, int c);

char					*ft_strrchr(const char *s, int c);

char					*ft_strstr(const char *big, const char *little);

char					*ft_strnstr(const char *big, const char *little,\
						size_t len);

int						ft_strcmp(const char *s1, const char *s2);

int						ft_strncmp(const char *s1, const char *s2, size_t n);

int						ft_isalpha(int c);

int						ft_isdigit(int c);

int						ft_isalnum(int c);

int						ft_isascii(int c);

int						ft_isprint(int c);

int						ft_toupper(int c);

int						ft_tolower(int c);

void					ft_memdel(void **ap);

void					*ft_memalloc(size_t size);

char					*ft_strnew(size_t size);

void					ft_strdel(char **as);

void					ft_strclr(char *s);

void					ft_striter(char *s, void (*f)(char *));

void					ft_striteri(char *s, void (*f)(unsigned int, char *));

void					ft_putchar_fd(char c, int fd);

void					ft_putstr_fd(char const *s, int fd);

void					ft_putendl(char const *s);

void					ft_putendl_fd(char const *s, int fd);

void					ft_putendl2_fd(char const *s, char const *s2, int fd);

void					ft_putnbr_fd(int n, int fd);

char					*ft_strmap(char const *s, char (*f)(char));

char					*ft_strmapi
						(char const *s, char (*f)(unsigned int, char));

char					*ft_itoa(int n);

int						ft_strequ(char const *s1, char const *s2);

int						ft_strnequ(char const *s1, char const *s2, size_t n);

char					*ft_strsub
						(char const *s, unsigned int start, size_t len);

char					*ft_strjoin(char const *s1, char const *s2);

char					*ft_strtrim(char const *s);

/*
****************
** linked list **
****************
*/

t_list					*ft_lstcreate_elem(void *data);

void					ft_lstpush_back(t_list **begin_list, void *data);

void					ft_lstpush_back_id\
						(t_list **begin_list, void *data, int id);

void					ft_lstpush_front(t_list **begin_list, void *data);

int						ft_lstsize(t_list *begin_list);

t_list					*ft_lstlast(t_list *begin_list);

t_list					*ft_lstlast_last(t_list *begin_list);

t_list					*ft_lstpush_params(int ac, char **av);

void					ft_lstclear(t_list **begin_list);

t_list					*ft_lstfind(t_list *begin_list, void *data_ref,
						int (*cmp)());

t_list					*ft_lstfind_id(t_list *begin_list, size_t id);

void					ft_lstforeach(t_list *begin_list, void (*f)(void *));

void					ft_lstforeach_if(t_list *begin_list, void (*f)(void *)
						, void *data_ref, int (*cmp)());

t_list					*ft_lstextract_elem_id(t_list *begin_list, int id);

void					ft_lstreverse(t_list **begin_list);

t_list					*ft_lstnew(void const *content, size_t content_size);

void					ft_lstdelone
						(t_list **alst, void (*del)(void *, size_t));

void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void					ft_lstadd(t_list **alst, t_list *new);

void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
******************
** GESTION FILE **
******************
*/
int						ft_number_of_line(char *str);

int						ft_file_exist(char *name);

int						ft_file_size(char *name);

char					*ft_file_return_data(char *name);
#endif
