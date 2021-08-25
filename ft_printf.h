/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 07:38:50 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 18:30:23 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# define CONVERSION_CODE "cspdiuxX%"
# define BD "0123456789"
# define BH "0123456789abcdef"
# define BHM "0123456789ABCDEF"
# define STR_SIZE 256

typedef struct s_format_code
{
	int		minus;
	int		plus;
	int		space;
	int		diez;
	int		zero;
	int		n;
	int		p;
	int		limitation;
	char	conv;
	int		ret;
	char	*str_psp;
	char	*str_sign;
	char	*str_diez;
	char	*str_0_p;
	char	*str_sp_g;
	char	*str_0fil_g;
	int		sign;
	int		ox;
	int		flag;
	int		nb_0_digits_for_p;
	int		nb_spaces_for_g;
}					t_format_code;

void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strndup(const char *src, size_t n);
size_t			ft_strlen(const char *s);
int				ft_strlen_int(const char *s);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *b, char c, size_t len);
void			ft_free_struct_str(char **p);
char			*ft_init_cstring(char **str, size_t len, char init_value);
char			*ft_reinit_cstring(char **p, size_t len, char init_value);
void			ft_struct_reinit(t_format_code *ptr);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
char			*ft_strrev(char *str);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_is_base_valid(char *base, int base_length);
void			ft_convert_in_base_b(unsigned long nbr2, \
unsigned long base_length, char *base, char *str);
char			*ft_putnbr_base_ul(unsigned long nbr, char *base);
char			*ft_putnbr_base_u(unsigned int nbr, char *base, \
								  t_format_code *ptr);
char			*ft_putnbr_char(char c);
char			*ft_putnbr_base(int nbr, char *base, t_format_code *ptr);
int				ft_find_length(int n);
char			*ft_itoa(int n);
const char		*ft_get_libelle(const char *format, t_format_code *ptr);
const char		*ft_get_pc(const char *format, t_format_code *ptr);
t_format_code	*ft_struct_init(t_format_code **ptr, char init_value);
char			*ft_custom_eval_sign(t_format_code *ptr, char **str);
void			ft_custom_eval_diez(t_format_code *ptr, char *str);
void			ft_custom_eval_space(t_format_code *ptr);
void			ft_gabarit_sup(t_format_code *ptr, char *str);
void			ft_gabarit_inf(t_format_code *ptr, char *str);
void			ft_custom_eval_gp(t_format_code *ptr, char *str);
char			*ft_custom_eval_convs(t_format_code *ptr, char **str);
void			ft_display(t_format_code *ptr, char *str);
void			ft_count_ret(t_format_code *ptr, char *str);
char			*ft_custom_display(t_format_code *ptr, char *str);
char			*ft_convert_value(t_format_code *ptr, va_list params);
void			ft_define_flags(char *format_code, t_format_code *ptr, \
size_t current);
void			ft_define_g(char *format_code, t_format_code *ptr, \
va_list params, int *tc);
size_t			ft_define_p(char *format_code, t_format_code *ptr, \
va_list params, int *tc);
void			ft_define_struct(char *format_code, t_format_code *ptr, \
va_list params);
const char		*ft_get_format_code(const char *format, t_format_code *ptr, \
va_list params);
int				ft_printf(const char *format, ...);
void			ft_free_t_format_code(t_format_code **ptr);
char			*ft_update_string(char **str, char *new);

#endif
