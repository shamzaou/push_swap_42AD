/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou <shamzaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:53:02 by shamzaou          #+#    #+#             */
/*   Updated: 2023/04/08 15:14:50 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct s_stack
{
    struct s_stack *prev;
    int data;
    struct s_stack *next;
}       t_stack;

#ifndef STDERR_FILENO
# define STDERR_FILENO 2
#endif 

void    ft_putstr(char *str);
t_stack *create_stack(int argc, int *arr);
void    append_node(int data, t_stack **prevNode);
void    print_list(t_stack* head);
void    ft_error(void);
int	    ft_isdigit(int n);
int     skip_space(char *str);
int     ft_atoi(char *str);
int     is_sign(char *str);
int     is_int(char *str);
int     *convert(int argc, char **argv);
int     parse_args(int argc, char **argv, int **arr_ptr);
t_stack *swap(t_stack *stack_to_swap);
void    sa(t_stack **stack_a);
void    sb(t_stack **stack_b);
void    ss(t_stack **stack_a, t_stack **stack_b);
t_stack *rotate(t_stack *stack);
void    ra(t_stack **stack_a);
void    rb(t_stack **stack_b);
void    rr(t_stack **stack_a, t_stack **stack_b);
t_stack *rev_rotate(t_stack *stack);
void    rra(t_stack **stack_a);
void    rrb(t_stack **stack_b);
void    rrr(t_stack **stack_a, t_stack **stack_b);
void    pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_a, t_stack **stack_b);
char	**ft_split(char const *s, char c);
int count_numbers(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int is_only_spaces(const char *str);
int is_empty_or_whitespace(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

void    three_sort(t_stack **stack_a);
void    five_sort(t_stack **stack_a);
void insert_sorted(t_stack **stack_a, t_stack **stack_b, int value, int n);

t_stack *find_largest_node(t_stack *head, int *pos_ptr);
int     stack_len(t_stack *stack);
int     ra_or_rra(t_stack *stack, int position);
int    to_the_top(t_stack **stack);
void    sort(t_stack **stack_a, t_stack **stack_b);
int     find_smallest_node_position(t_stack *head);
int find_largest_node_position(t_stack *head);

void partition(t_stack **stack_a, t_stack **stack_b, int low, int high, int *pivot_idx);
void merge(t_stack **stack_a, t_stack **stack_b, int low, int high);
void quick_sort_recursive(t_stack **stack_a, t_stack **stack_b, int low, int high);
void quick_sort(t_stack **stack_a, t_stack **stack_b);
int find_pivot(t_stack *stack, int low, int high);
void to_the_top_at_position(t_stack **stack, int position);


void my_sort(t_stack **stack_a, t_stack **stack_b);
int ft_intstack_size(t_stack *stack);
void gsort(t_stack **stack_a, t_stack **stack_b, int n, int pref);
int find_median(t_stack *stack, int n);

#endif