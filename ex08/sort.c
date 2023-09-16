/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:24:03 by yabdoul           #+#    #+#             */
/*   Updated: 2023/09/16 21:14:32 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;

	while (i < size )
	{ 
	j=i+1;
		while (j <size )
		{
			write(1,"c",1);
			if (tab[i] > tab [j])
			{ write(1,"a",1);
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
				j++;
		}
		i++;
	}
}


int main ()
{
int tab [5] = {9,4,0,8,9};
int i,a;
i=0;
ft_sort_int_tab(tab,5);
while(i<5)
{
int a = tab[i]+'0';
write(1,&a,1);
i++ ;
}
return(0);
}
