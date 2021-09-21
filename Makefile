# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 23:32:52 by mbenmesb          #+#    #+#              #
#    Updated: 2021/08/23 23:33:07 by mbenmesb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang

INCLUDE_DIR	=	.
SRC_DIR	=	src
SRCS	=	$(SRC_DIR)/ft_putchar.c \
			$(SRC_DIR)/ft_putstr.c \
			$(SRC_DIR)/ft_strndup.c \
			$(SRC_DIR)/ft_strlen.c \
			$(SRC_DIR)/ft_strlen_int.c \
			$(SRC_DIR)/ft_strchr.c \
			$(SRC_DIR)/ft_memset.c	\
			$(SRC_DIR)/ft_free_struct_str.c \
			$(SRC_DIR)/ft_init_cstring.c \
			$(SRC_DIR)/ft_reinit_cstring.c \
			$(SRC_DIR)/ft_struct_reinit.c \
			$(SRC_DIR)/ft_atoi.c \
			$(SRC_DIR)/ft_isdigit.c \
			$(SRC_DIR)/ft_strrev.c \
			$(SRC_DIR)/ft_memcpy.c \
			$(SRC_DIR)/ft_memmove.c \
			$(SRC_DIR)/ft_strjoin.c \
			$(SRC_DIR)/ft_is_base_valid.c \
			$(SRC_DIR)/ft_convert_in_base_b.c \
			$(SRC_DIR)/ft_putnbr_base_ul.c \
			$(SRC_DIR)/ft_putnbr_base_u.c \
			$(SRC_DIR)/ft_putnbr_char.c \
			$(SRC_DIR)/ft_putnbr_base.c \
			$(SRC_DIR)/ft_find_length.c \
			$(SRC_DIR)/ft_itoa.c \
			$(SRC_DIR)/ft_get_libelle.c \
			$(SRC_DIR)/ft_get_pc.c \
			$(SRC_DIR)/ft_struct_init.c \
			$(SRC_DIR)/ft_custom_eval_sign.c \
			$(SRC_DIR)/ft_custom_eval_diez.c \
			$(SRC_DIR)/ft_custom_eval_space.c \
			$(SRC_DIR)/ft_gabarit_sup.c \
			$(SRC_DIR)/ft_gabarit_inf.c \
			$(SRC_DIR)/ft_custom_eval_gp.c \
			$(SRC_DIR)/ft_custom_eval_convs.c \
			$(SRC_DIR)/ft_display.c \
			$(SRC_DIR)/ft_count_ret.c \
			$(SRC_DIR)/ft_custom_display.c \
			$(SRC_DIR)/ft_convert_value.c \
			$(SRC_DIR)/ft_define_flags.c \
			$(SRC_DIR)/ft_define_g.c \
			$(SRC_DIR)/ft_define_p.c \
			$(SRC_DIR)/ft_define_struct.c \
			$(SRC_DIR)/ft_get_format_code.c \
			$(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/ft_free_t_format_code.c \
			$(SRC_DIR)/ft_update_string.c

BINCLUDE_DIR	=	.
BSRC_DIR	=	src_bonus
BSRCS	=	$(BSRC_DIR)/ft_putchar_bonus.c \
			$(BSRC_DIR)/ft_putstr_bonus.c \
			$(BSRC_DIR)/ft_strndup_bonus.c \
			$(BSRC_DIR)/ft_strlen_bonus.c \
			$(BSRC_DIR)/ft_strlen_int_bonus.c \
			$(BSRC_DIR)/ft_strchr_bonus.c \
			$(BSRC_DIR)/ft_memset_bonus.c \
			$(BSRC_DIR)/ft_free_struct_str_bonus.c \
			$(BSRC_DIR)/ft_init_cstring_bonus.c \
			$(BSRC_DIR)/ft_reinit_cstring_bonus.c \
			$(BSRC_DIR)/ft_struct_reinit_bonus.c \
			$(BSRC_DIR)/ft_atoi_bonus.c \
			$(BSRC_DIR)/ft_isdigit_bonus.c \
			$(BSRC_DIR)/ft_strrev_bonus.c \
			$(BSRC_DIR)/ft_memcpy_bonus.c \
			$(BSRC_DIR)/ft_memmove_bonus.c \
			$(BSRC_DIR)/ft_strjoin_bonus.c \
			$(BSRC_DIR)/ft_is_base_valid_bonus.c \
			$(BSRC_DIR)/ft_convert_in_base_b_bonus.c \
			$(BSRC_DIR)/ft_putnbr_base_ul_bonus.c \
			$(BSRC_DIR)/ft_putnbr_base_u_bonus.c \
			$(BSRC_DIR)/ft_putnbr_char_bonus.c \
			$(BSRC_DIR)/ft_putnbr_base_bonus.c \
			$(BSRC_DIR)/ft_find_length_bonus.c \
			$(BSRC_DIR)/ft_itoa_bonus.c \
			$(BSRC_DIR)/ft_get_libelle_bonus.c \
			$(BSRC_DIR)/ft_get_pc_bonus.c \
			$(BSRC_DIR)/ft_struct_init_bonus.c \
			$(BSRC_DIR)/ft_custom_eval_sign_bonus.c \
			$(BSRC_DIR)/ft_custom_eval_diez_bonus.c \
			$(BSRC_DIR)/ft_custom_eval_space_bonus.c \
			$(BSRC_DIR)/ft_gabarit_sup_bonus.c \
			$(BSRC_DIR)/ft_gabarit_inf_bonus.c \
			$(BSRC_DIR)/ft_custom_eval_gp_bonus.c \
			$(BSRC_DIR)/ft_custom_eval_convs_bonus.c \
			$(BSRC_DIR)/ft_display_bonus.c \
			$(BSRC_DIR)/ft_count_ret_bonus.c \
			$(BSRC_DIR)/ft_custom_display_bonus.c \
			$(BSRC_DIR)/ft_convert_value_bonus.c \
			$(BSRC_DIR)/ft_define_flags_bonus.c \
			$(BSRC_DIR)/ft_define_g_bonus.c \
			$(BSRC_DIR)/ft_define_p_bonus.c \
			$(BSRC_DIR)/ft_define_struct_bonus.c \
			$(BSRC_DIR)/ft_get_format_code_bonus.c \
			$(BSRC_DIR)/ft_printf_bonus.c \
			$(BSRC_DIR)/ft_free_t_format_code_bonus.c \
			$(BSRC_DIR)/ft_update_string_bonus.c

BOBJS	=	$(BSRCS:.c=.o)

OBJS = $(SRCS:.c=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR) -I $(BINCLUDE_DIR)


all:		fclean $(NAME)

bonus:		fclean $(BOBJS)
			ar rc $(NAME) $(BOBJS)
			ranlib $(NAME)
.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		clean fclean re all bonus

