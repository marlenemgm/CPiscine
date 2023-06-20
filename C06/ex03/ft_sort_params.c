/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlengo <marlengo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:14:43 by marlengo          #+#    #+#             */
/*   Updated: 2023/06/20 08:47:50 by marlengo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int compare_strings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return *str1 - *str2;
        str1++;
        str2++;
    }
    if (*str1)
        return 1;
    if (*str2)
        return -1; 
    return 0;
}

void insertion_sort(char **arr, int size) {
    int i = 1;
    
    while (i < size) {
        char *key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && compare_strings(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
        i++;
    }
}

int main(int argc, char **argv) {
    int index = 1;
    
    insertion_sort(argv + 1, argc - 1);
    
    while (index < argc) {
        ft_putstr(argv[index]);
        index++;
    }
    
    return 0;
}