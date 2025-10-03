/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stcozaci <stcozaci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:20:35 by stcozaci          #+#    #+#             */
/*   Updated: 2025/10/03 13:31:56 by stcozaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

#define MAX_LEN 80

int main(void)
{
	char buffer[60] = "hello";
	size_t result = ft_strlcat(buffer, "nas", 9);

	printf("Buffer: %s\n", buffer);     // Imprime: "Hola mund"
	printf("Longitud fuente: %zu\n", result);  // Imprime : 0
	return 0;
}

/*********************  Expected output:  ************************

Before memcpy, target is "This is the target string"
After memcpy, target becomes "This is the source string"
*/
