/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuker <sbuker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:45:29 by sbuker            #+#    #+#             */
/*   Updated: 2023/07/13 21:36:47 by sbuker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str){
    int i;
    int a;
    int arr[20];

    i = 0;

    while((*(str + i)) != '\0'){
        a = *(str+i);
        if(a >=  48 && a <= 57){
            a -= 48;
            arr[i] = a;
        }
        i++;
    }
    return (arr);
}

int main(){
  const char *str = "12345";
int sayi = ft_atoi(str);
printf("Dönüştürülen sayı: %d\n", sayi);  
}