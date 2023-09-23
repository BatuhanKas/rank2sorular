/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:22:22 by bkas              #+#    #+#             */
/*   Updated: 2023/08/10 17:30:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void hexa(int s)
{
    if (s >= 16)
        hexa(s / 16);
    write(1, &"0123456789abcdef"[s % 16], 1);   
}

int  atoi(char *s)
{
    int i = 0;
    int res = 0;
    while (s[i])
    {
        res = (res * 10) + s[i] - '0';
        i++;
    }
    return res;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        hexa(atoi(argv[1]));
    }
    write(1, "\n", 1);
    return 0;
}