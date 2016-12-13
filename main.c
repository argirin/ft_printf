/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:01:24 by kcosta            #+#    #+#             */
/*   Updated: 2016/12/13 19:04:17 by argirin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TEST_D

#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include "includes/ft_printf.h"

int		main(void)
{

#ifdef TEST_F

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("{%f}{%F}", 1.42, 1.42));
	printf("{%d}\n", printf("{%f}{%F}", -1.42, -1.42));
	printf("{%d}\n", printf("{%f}{%F}", 1444565444646.6465424242242, 1444565444646.6465424242242));
	printf("{%d}\n", printf("{%f}{%F}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654));
	printf("{%d}\n", printf("{%f}{%F}", 0.0, 0.0));
	printf("{%d}\n", printf("{% f}{% F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%+f}{%+F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%-5f}{%-5F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%25.5f}{%25.5F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%-25.5f}{%-25.5F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%#f}{%#F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%05f}{%05F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%025f}{%025F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%+025f}{%+025F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%0.10f}{%0.10F}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%hhf}{%hhF}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%hf}{%hF}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%lf}{%lF}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%llf}{%llF}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%jf}{%jF}", 42424242.4242424242424242, 424242424242.424242424242));
	printf("{%d}\n", printf("{%zf}{%zF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("{%f}{%F}", 1.42, 1.42));
	ft_printf("{%d}\n", ft_printf("{%f}{%F}", -1.42, -1.42));
	ft_printf("{%d}\n", ft_printf("{%f}{%F}", 1444565444646.6465424242242, 1444565444646.6465424242242));
	ft_printf("{%d}\n", ft_printf("{%f}{%F}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654));
	ft_printf("{%d}\n", ft_printf("{%f}{%F}", 0.0, 0.0));
	ft_printf("{%d}\n", ft_printf("{% f}{% F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%+f}{%+F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%-5f}{%-5F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%25.5f}{%25.5F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%-25.5f}{%-25.5F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%#f}{%#F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%05f}{%05F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%025f}{%025F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%+025f}{%+025F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%0.10f}{%0.10F}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%hhf}{%hhF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%hf}{%hF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%lf}{%lF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%llf}{%llF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%jf}{%jF}", 42424242.4242424242424242, 424242424242.424242424242));
	ft_printf("{%d}\n", ft_printf("{%zf}{%zF}", 42424242.4242424242424242, 424242424242.424242424242));

#endif
#ifdef TEST_BONUS

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("%*d", 5, 42));
	printf("{%d}\n", printf("{%*d}", -5, 42));
	printf("{%d}\n", printf("{%*d}", 0, 42));
	printf("{%d}\n", printf("{%*c}", 0, 0));
	printf("{%d}\n", printf("{%*c}", -15, 0));
	printf("{%d}\n", printf("{%.*d}", 5, 42));
	printf("{%d}\n", printf("{%.*d}", -5, 42));
	printf("{%d}\n", printf("{%.*d}", 0, 42));
	printf("{%d}\n", printf("{%.*s}", 5, "42"));
	printf("{%d}\n", printf("{%.*s}", -5, "42"));
	printf("{%d}\n", printf("{%.*s}", 0, "42"));
	printf("{%d}\n", printf("{%*s}", 5, 0));
	printf("{%d}\n", printf("{%3*p}", 10, 0));
	printf("{%d}\n", printf("%*.*d", 0, 3, 0));
	printf("{%d}\n", printf("{%3*d}", 0, 0));
	printf("{%d}\n", printf("{%*3d}", 0, 0));
	printf("{%d}\n", printf("{%*3d}", 5, 0));
	printf("{%d}\n", printf("{%05.*d}", -15, 42));
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("%*d", 5, 42));
	ft_printf("{%d}\n", ft_printf("{%*d}", -5, 42));
	ft_printf("{%d}\n", ft_printf("{%*d}", 0, 42));
	ft_printf("{%d}\n", ft_printf("{%*c}", 0, 0));
	ft_printf("{%d}\n", ft_printf("{%*c}", -15, 0));
	ft_printf("{%d}\n", ft_printf("{%.*d}", 5, 42));
	ft_printf("{%d}\n", ft_printf("{%.*d}", -5, 42));
	ft_printf("{%d}\n", ft_printf("{%.*d}", 0, 42));
	ft_printf("{%d}\n", ft_printf("{%.*s}", 5, "42"));
	ft_printf("{%d}\n", ft_printf("{%.*s}", -5, "42"));
	ft_printf("{%d}\n", ft_printf("{%.*s}", 0, "42"));
	ft_printf("{%d}\n", ft_printf("{%*s}", 5, 0));
	ft_printf("{%d}\n", ft_printf("{%3*p}", 10, 0));
	ft_printf("{%d}\n", ft_printf("%*.*d", 0, 3, 0));
	ft_printf("{%d}\n", ft_printf("{%3*d}", 0, 0));
	ft_printf("{%d}\n", ft_printf("{%*3d}", 0, 0));
	ft_printf("{%d}\n", ft_printf("{%*3d}", 5, 0));
	ft_printf("{%d}\n", ft_printf("{%05.*d}", -15, 42));

#endif
#ifdef UNDEFINED

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("%"));
	printf("{%d}\n", printf("% "));
	printf("{%d}\n", printf("% h"));
	printf("{%d}\n", printf("%h"));
	printf("{%d}\n", printf("%Z"));
	printf("{%d}\n", printf("% hZ"));
	printf("{%d}\n", printf("% hZ%"));
	printf("{%d}\n", printf("% Z", "test"));
	printf("{%d}\n", printf("% Z ", "test"));
	printf("{%d}\n", printf("% Z%s", "test"));
	printf("{%d}\n", printf("%%%", "test"));
	printf("{%d}\n", printf("%%   %", "test"));
	printf("{%d}\n", printf("%ll#x", 9223372036854775807));
	printf("{%d}\n", printf("%010s is a string", "this"));
	printf("{%d}\n", printf("%05c", 42));
	printf("{%d}\n", printf("% Z", 42));
	printf("{%d}\n", printf("%5+d", 42));
	printf("{%d}\n", printf("%5+d", -42));
	printf("{%d}\n", printf("%-5+d", 42));
	printf("{%d}\n", printf("%-5+d", -42));
	printf("{%d}\n", printf("%zhd", "4294967296"));
	printf("{%d}\n", printf("%jzd", "9223372036854775807"));
	printf("{%d}\n", printf("%jhd", "9223372036854775807"));
	printf("{%d}\n", printf("%lhl", "9223372036854775807"));
	printf("{%d}\n", printf("%lhlz", "9223372036854775807"));
	printf("{%d}\n", printf("%zj", "9223372036854775807"));
	printf("{%d}\n", printf("%lhh", "2147483647"));
	printf("{%d}\n", printf("%hhld", "128"));
	printf("{%d}\n", printf("@main_ftprintf: |%####000033..1..#00d|\n", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%####000033..1d|", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%###-#000033...12..#0+0d|", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%33d|", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%+33d|", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%-+33d|", 256));
	printf("{%d}\n", printf("@main_ftprintf: |%-+33.d|", 256));
	ft_printf("------------------------------------------\n");

#endif
#ifdef TEST

	static int	i = 42;

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("|s: %s, p: %p, d:%d|", "a string", &i, 42));
	printf("{%d}\n", printf("|%10RR|"));
	printf("{%d}\n", printf("|%#10RR|"));
	printf("{%d}\n", printf("|%010RR|"));
	printf("{%d}\n", printf("|%+10RR|"));
	printf("{%d}\n", printf("|%-10RR|"));
	printf("{%d}\n", printf("|%#10.5RR|"));
	printf("{%d}\n", printf("|%010.5RR|"));
	printf("{%d}\n", printf("|%+10.5RR|"));
	printf("{%d}\n", printf("|%-10.5RR|"));
	printf(" {%d}\n", printf("|%d|", 42));
	printf("|len %d|\n", printf("@moulitest: %#.1x %#.10x", 0, 0));
	printf("|len %d|\n", printf("@moulitest: %#.x %#.0x", 0, 0));
	printf("|len %d|\n", printf("@moulitest: %.x %.0x", 0, 0));
	printf("|len %d|\n", printf("@moulitest: %5.x %5.0x", 0, 0));
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("|s: %s, p: %p, d:%d|", "a string", &i, 42));
	ft_printf("{%d}\n", ft_printf("|%10RR|"));
	ft_printf("{%d}\n", ft_printf("|%#10RR|"));
	ft_printf("{%d}\n", ft_printf("|%010RR|"));
	ft_printf("{%d}\n", ft_printf("|%+10RR|"));
	ft_printf("{%d}\n", ft_printf("|%-10RR|"));
	ft_printf("{%d}\n", ft_printf("|%#10.5RR|"));
	ft_printf("{%d}\n", ft_printf("|%010.5RR|"));
	ft_printf("{%d}\n", ft_printf("|%+10.5RR|"));
	ft_printf("{%d}\n", ft_printf("|%-10.5RR|"));
	ft_printf(" {%d}\n", ft_printf("|%d|", 42));
	ft_printf("|len %d|\n", ft_printf("@moulitest: %#.1x %#.10x", 0, 0));
	ft_printf("|len %d|\n", ft_printf("@moulitest: %#.x %#.0x", 0, 0));
	ft_printf("|len %d|\n", ft_printf("@moulitest: %.x %.0x", 0, 0));
	ft_printf("|len %d|\n", ft_printf("@moulitest: %5.x %5.0x", 0, 0));

#endif
#ifdef TEST_C

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("{%05.c}", 0));
	printf("{%d}\n", printf("{%05.c}", 'a'));
	printf("{%d}\n", printf("|%c|", '4'));
	printf("{%d}\n", printf("|%hhc|", '4'));
	printf("{%d}\n", printf("|%hc|", '4'));
	printf("{%d}\n", printf("|%llc|", '4'));
	printf("{%d}\n", printf("|%jc|", '4'));
	printf("{%d}\n", printf("|%zc|", '4'));
	printf("{%d}\n", printf("%+c", 'a'));
	printf("{%d}\n", printf("%#c", 'a'));
	printf("|%c|\n", '4');
	printf("|%-c|\n", '4');
	printf("|%15c|\n", '4');
	printf("|%-15c|\n", '4');
	printf("%.2c", NULL);
	printf("% c", 0);
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("{%05.c}", 0));
	ft_printf("{%d}\n", ft_printf("{%05.c}", 'a'));
	ft_printf("{%d}\n", ft_printf("|%c|", '4'));
	ft_printf("{%d}\n", ft_printf("|%hhc|", '4'));
	ft_printf("{%d}\n", ft_printf("|%hc|", '4'));
	ft_printf("{%d}\n", ft_printf("|%llc|", '4'));
	ft_printf("{%d}\n", ft_printf("|%jc|", '4'));
	ft_printf("{%d}\n", ft_printf("|%zc|", '4'));
	ft_printf("{%d}\n", ft_printf("%+c", 'a'));
	ft_printf("{%d}\n", ft_printf("%#c", 'a'));
	ft_printf("|%c|\n", '4');
	ft_printf("|%-c|\n", '4');
	ft_printf("|%15c|\n", '4');
	ft_printf("|%-15c|\n", '4');
	ft_printf("%.2c", NULL);
	ft_printf("% c", 0);

#endif
#ifdef TEST_S

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("{%05.s}", 0));
	printf("{%d}\n", printf("{%05.s}", "42"));
	printf("{%d}\n", printf("|%s|", "salut"));
	printf("{%d}\n", printf("|%hhs|", "salut"));
	printf("{%d}\n", printf("|%hs|", "salut"));
	printf("{%d}\n", printf("|%lls|", "salut"));
	printf("{%d}\n", printf("|%js|", "salut"));
	printf("{%d}\n", printf("|%zs|", "salut"));
	printf("{%d}\n", printf("{% s}", NULL));
	printf("{%d}\n", printf("[%+s]", 0));
	printf("{%d}\n", printf("[%#s]", 0));
	printf("{%d}\n", printf("[%#s]", "hola"));
	printf("|%s|\n", "Number 42");
	printf("|%-s|\n", "Number 42");
	printf("|%5.5s|\n", "Number 42");
	printf("|%15.5s|\n", "Number 42");
	printf("|%.5s|\n", "Number 42");
	printf("|%15s|\n", "Number 42");
	printf("|%-5.5s|\n", "Number 42");
	printf("|%-15.5s|\n", "Number 42");
	printf("|%-.5s|\n", "Number 42");
	printf("|%-15s|\n", "Number 42");
	printf("|%d|\n", printf("|%s|", NULL));
	printf("|%-s|\n", NULL);
	printf("|%5.5s|\n", NULL);
	printf("|%15.5s|\n", NULL);
	printf("|%.5s|\n", NULL);
	printf("|%15s|\n", NULL);
	printf("|%-5.5s|\n", NULL);
	printf("|%-15.5s|\n", NULL);
	printf("|%-.5s|\n", NULL);
	printf("|%-15s|\n", NULL);
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("{%05.s}", 0));
	ft_printf("{%d}\n", ft_printf("{%05.s}", "42"));
	ft_printf("{%d}\n", ft_printf("|%s|", "salut"));
	ft_printf("{%d}\n", ft_printf("|%hhs|", "salut"));
	ft_printf("{%d}\n", ft_printf("|%hs|", "salut"));
	ft_printf("{%d}\n", ft_printf("|%lls|", "salut"));
	ft_printf("{%d}\n", ft_printf("|%js|", "salut"));
	ft_printf("{%d}\n", ft_printf("|%zs|", "salut"));
	ft_printf("{%d}\n", ft_printf("{% s}", NULL));
	ft_printf("{%d}\n", ft_printf("[%+s]", 0));
	ft_printf("{%d}\n", ft_printf("[%#s]", 0));
	ft_printf("{%d}\n", ft_printf("[%#s]", "hola"));
	ft_printf("|%s|\n", "Number 42");
	ft_printf("|%-s|\n", "Number 42");
	ft_printf("|%5.5s|\n", "Number 42");
	ft_printf("|%15.5s|\n", "Number 42");
	ft_printf("|%.5s|\n", "Number 42");
	ft_printf("|%15s|\n", "Number 42");
	ft_printf("|%-5.5s|\n", "Number 42");
	ft_printf("|%-15.5s|\n", "Number 42");
	ft_printf("|%-.5s|\n", "Number 42");
	ft_printf("|%-15s|\n", "Number 42");
	ft_printf("|%d|\n", ft_printf("|%s|", NULL));
	ft_printf("|%-s|\n", NULL);
	ft_printf("|%5.5s|\n", NULL);
	ft_printf("|%15.5s|\n", NULL);
	ft_printf("|%.5s|\n", NULL);
	ft_printf("|%15s|\n", NULL);
	ft_printf("|%-5.5s|\n", NULL);
	ft_printf("|%-15.5s|\n", NULL);
	ft_printf("|%-.5s|\n", NULL);
	ft_printf("|%-15s|\n", NULL);

#endif
#ifdef TEST_P

	int		i = 42;
	printf("------------------------------------------\n");
	printf("{%d}\n", printf("{%05p}", 0));
	printf("{%d}\n", printf("%9.2p", 1234));
	printf("{%d}\n", printf("%#9.2x", 1234));
	printf("{%d}\n", printf("|%.0p|, |%.p|", 0, 0));
	printf("{%d}\n", printf("|%.1p|, |%.1p|", 0, 0));
	printf("{%d}\n", printf("|%.5p|, |%.5p|", 0, 0));
	printf("{%d}\n", printf("|%10.5p|, |%10.5p|", 0, 0));
	printf("{%d}\n", printf("|%-10.5p|, |%-10.5p|", 0, 0));
	printf("%d\n", printf("|%p|\n", &i));
	printf("|%-5p|\n", &i);
	printf("{%d}\n", printf("|%p|", 0));
	printf("{%d}\n", printf("|%lp|", 42));
	printf("{%d}\n", printf("|%5p|", 0));
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("{%05p}", 0));
	ft_printf("{%d}\n", ft_printf("%9.2p", 1234));
	ft_printf("{%d}\n", ft_printf("%#9.2x", 1234));
	ft_printf("{%d}\n", ft_printf("|%.0p|, |%.p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("|%.1p|, |%.1p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("|%.5p|, |%.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("|%10.5p|, |%10.5p|", 0, 0));
	ft_printf("{%d}\n", ft_printf("|%-10.5p|, |%-10.5p|", 0, 0));
	ft_printf("%d\n", ft_printf("|%p|\n", &i));
	ft_printf("|%-5p|\n", &i);
	ft_printf("{%d}\n", ft_printf("|%p|", 0));
	ft_printf("{%d}\n", ft_printf("|%lp|", 42));
	ft_printf("{%d}\n", ft_printf("|%5p|", 0));

#endif
#ifdef TEST_X

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("|%+x|", (unsigned int)42));
	printf("{%d}\n", printf("|% x|", (unsigned int)42));
	printf("|%x|\n", (unsigned int)42);
	printf("|%hhx|\n", (unsigned char)42);
	printf("|%hx|\n", (unsigned short)42);
	printf("|%lx|\n", (unsigned long)42);
	printf("|%llx|\n", (unsigned long long)42);
	printf("|%jx|\n", (uintmax_t)42);
	printf("|%zx|\n", (size_t)42);
	printf("|%X|\n", (unsigned int)42);
	printf("|%hhX|\n", (unsigned char)42);
	printf("|%hX|\n", (unsigned short)42);
	printf("|%lX|\n", (unsigned long)42);
	printf("|%llX|\n", (unsigned long long)42);
	printf("|%jX|\n", (uintmax_t)42);
	printf("|%zX|\n", (size_t)42);
	printf("|%#5x|\n", 42);
	printf("|%#2x|\n", 42);
	printf("|%#5X|\n", 42);
	printf("|%#2X|\n", 42);
	printf("|%-5x|\n", 42);
	printf("|%6.9x|\n", 42);
	printf("|%-9.5x|\n", 42);
	printf("|%#-9.5x|\n", 42);
	printf("|%#9.5x|\n", 42);
	printf("|%#-9.5x|\n", 2);
	printf("|%#9.5x|\n", 2);
	printf("|%-9.1x|\n", 42);
	printf("|%05x|\n", 42);
	printf("|%0.5x|\n", 42);
	printf("|%.5x|\n", 42);
	printf("|%09.5x|\n", 42);
	printf("|%09.3x|\n", 42);
	printf("|%09.2x|\n", 42);
	printf("|%#-9.5x|\n", 0);
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("|%+x|", (unsigned int)42));
	ft_printf("{%d}\n", ft_printf("|% x|", (unsigned int)42));
	ft_printf("|%x|\n", (unsigned int)42);
	ft_printf("|%hhx|\n", (unsigned char)42);
	ft_printf("|%hx|\n", (unsigned short)42);
	ft_printf("|%lx|\n", (unsigned long)42);
	ft_printf("|%llx|\n", (unsigned long long)42);
	ft_printf("|%jx|\n", (uintmax_t)42);
	ft_printf("|%zx|\n", (size_t)42);
	ft_printf("|%X|\n", (unsigned int)42);
	ft_printf("|%hhX|\n", (unsigned char)42);
	ft_printf("|%hX|\n", (unsigned short)42);
	ft_printf("|%lX|\n", (unsigned long)42);
	ft_printf("|%llX|\n", (unsigned long long)42);
	ft_printf("|%jX|\n", (uintmax_t)42);
	ft_printf("|%zX|\n", (size_t)42);
	ft_printf("|%#5x|\n", 42);
	ft_printf("|%#2x|\n", 42);
	ft_printf("|%#5X|\n", 42);
	ft_printf("|%#2X|\n", 42);
	ft_printf("|%-5x|\n", 42);
	ft_printf("|%6.9x|\n", 42);
	ft_printf("|%-9.5x|\n", 42);
	ft_printf("|%#-9.5x|\n", 42);
	ft_printf("|%#9.5x|\n", 42);
	ft_printf("|%#-9.5x|\n", 2);
	ft_printf("|%#9.5x|\n", 2);
	ft_printf("|%-9.1x|\n", 42);
	ft_printf("|%05x|\n", 42);
	ft_printf("|%0.5x|\n", 42);
	ft_printf("|%.5x|\n", 42);
	ft_printf("|%09.5x|\n", 42);
	ft_printf("|%09.3x|\n", 42);
	ft_printf("|%09.2x|\n", 42);
	ft_printf("|%#-9.5x|\n", 0);

#endif
#ifdef TEST_O

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("% o", 42));
	printf("{%d}\n", printf("%+o", 42));
	printf("{%d}\n", printf("|%#o|", 0));
	printf("{%d}\n", printf("|%#.o|", 42));
	printf("{%d}\n", printf("|%#.o|", 0));
	printf("|%o|\n", (unsigned int)42);
	printf("|%hho|\n", (unsigned char)42);
	printf("|%ho|\n", (unsigned short)42);
	printf("|%lo|\n", (unsigned long)42);
	printf("|%llo|\n", (unsigned long long)42);
	printf("|%jo|\n", (uintmax_t)42);
	printf("|%zo|\n", (size_t)42);
	printf("|%O|\n", (unsigned int)42);
	printf("|%hhO|\n", (unsigned char)42);
	printf("|%hO|\n", (unsigned short)42);
	printf("|%lO|\n", (unsigned long)42);
	printf("|%llO|\n", (unsigned long long)42);
	printf("|%jO|\n", (uintmax_t)42);
	printf("|%zO|\n", (size_t)42);
	printf("|%#5o|\n", 42);
	printf("|%-5o|\n", 42);
	printf("|%6.9o|\n", 42);
	printf("|%-9.5o|\n", 42);
	printf("|%#-9.5o|\n", 42);
	printf("|%-9.1o|\n", 42);
	printf("|%05o|\n", 42);
	printf("|%0.5o|\n", 42);
	printf("|%.5o|\n", 42);
	printf("|%09.5o|\n", 42);
	printf("|%09.3o|\n", 42);
	printf("|%09.2o|\n", 42);
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("% o", 42));
	ft_printf("{%d}\n", ft_printf("%+o", 42));
	ft_printf("{%d}\n", ft_printf("|%#o|", 0));
	ft_printf("{%d}\n", ft_printf("|%#.o|", 42));
	ft_printf("{%d}\n", ft_printf("|%#.o|", 0));
	ft_printf("|%o|\n", (unsigned int)42);
	ft_printf("|%hho|\n", (unsigned char)42);
	ft_printf("|%ho|\n", (unsigned short)42);
	ft_printf("|%lo|\n", (unsigned long)42);
	ft_printf("|%llo|\n", (unsigned long long)42);
	ft_printf("|%jo|\n", (uintmax_t)42);
	ft_printf("|%zo|\n", (size_t)42);
	ft_printf("|%O|\n", (unsigned int)42);
	ft_printf("|%hhO|\n", (unsigned char)42);
	ft_printf("|%hO|\n", (unsigned short)42);
	ft_printf("|%lO|\n", (unsigned long)42);
	ft_printf("|%llO|\n", (unsigned long long)42);
	ft_printf("|%jO|\n", (uintmax_t)42);
	ft_printf("|%zO|\n", (size_t)42);
	ft_printf("|%#5o|\n", 42);
	ft_printf("|%-5o|\n", 42);
	ft_printf("|%6.9o|\n", 42);
	ft_printf("|%-9.5o|\n", 42);
	ft_printf("|%#-9.5o|\n", 42);
	ft_printf("|%-9.1o|\n", 42);
	ft_printf("|%05o|\n", 42);
	ft_printf("|%0.5o|\n", 42);
	ft_printf("|%.5o|\n", 42);
	ft_printf("|%09.5o|\n", 42);
	ft_printf("|%09.3o|\n", 42);
	ft_printf("|%09.2o|\n", 42);

#endif
#ifdef TEST_U

	printf("------------------------------------------\n");
	printf("{%d}\n", printf("%.u, %.0u", 0, 0));
	printf("{%d}\n", printf("%.u, %.0u", 42, 42));
	printf("{%d}\n", printf("|%#u|", (unsigned int)42));
	printf("|%u|\n", (unsigned int)42);
	printf("|%hu|\n", (unsigned short)42);
	printf("|%hhu|\n", (unsigned char)42);
	printf("|%lu|\n", (unsigned long)42);
	printf("|%llu|\n", (unsigned long long)42);
	printf("|%ju|\n", (uintmax_t)42);
	printf("|%zu|\n", (size_t)42);
	printf("|%u|\n", (unsigned int)42);
	printf("|%0u|\n", (unsigned int)42);
	printf("|%05.2u|\n", (unsigned int)42);
	printf("|%-9u|\n", (unsigned int)42);
	printf("|%U|\n", (unsigned int)42);
	printf("|%hU|\n", (unsigned short)42);
	printf("|%hhU|\n", (unsigned char)42);
	printf("|%lU|\n", (unsigned long)42);
	printf("|%llU|\n", (unsigned long long)42);
	printf("|%jU|\n", (uintmax_t)42);
	printf("|%zU|\n", (size_t)42);
	printf("|%U|\n", (unsigned int)42);
	printf("|%0U|\n", (unsigned int)42);
	printf("|%05.2U|\n", (unsigned int)42);
	printf("|%-9U|\n", (unsigned int)42);
	ft_printf("------------------------------------------\n");
	ft_printf("{%d}\n", ft_printf("%.u, %.0u", 0, 0));
	ft_printf("{%d}\n", ft_printf("%.u, %.0u", 42, 42));
	ft_printf("{%d}\n", ft_printf("|%#u|", (unsigned int)42));
	ft_printf("|%u|\n", (unsigned int)42);
	ft_printf("|%hu|\n", (unsigned short)42);
	ft_printf("|%hhu|\n", (unsigned char)42);
	ft_printf("|%lu|\n", (unsigned long)42);
	ft_printf("|%llu|\n", (unsigned long long)42);
	ft_printf("|%ju|\n", (uintmax_t)42);
	ft_printf("|%zu|\n", (size_t)42);
	ft_printf("|%u|\n", (unsigned int)42);
	ft_printf("|%0u|\n", (unsigned int)42);
	ft_printf("|%05.2u|\n", (unsigned int)42);
	ft_printf("|%-9u|\n", (unsigned int)42);
	ft_printf("|%U|\n", (unsigned int)42);
	ft_printf("|%hU|\n", (unsigned short)42);
	ft_printf("|%hhU|\n", (unsigned char)42);
	ft_printf("|%lU|\n", (unsigned long)42);
	ft_printf("|%llU|\n", (unsigned long long)42);
	ft_printf("|%jU|\n", (uintmax_t)42);
	ft_printf("|%zU|\n", (size_t)42);
	ft_printf("|%U|\n", (unsigned int)42);
	ft_printf("|%0U|\n", (unsigned int)42);
	ft_printf("|%05.2U|\n", (unsigned int)42);
	ft_printf("|%-9U|\n", (unsigned int)42);

#endif
#ifdef TEST_POUR

	printf("|%%|\n");
	printf("|%hh%|\n");
	printf("|%h%|\n");
	printf("|%l%|\n");
	printf("|%ll%|\n");
	printf("|%j%|\n");
	printf("|%z%|\n");
	printf("|%5%|\n");
	printf("|%05%|\n");
	printf("|%0.5%|\n");
	printf("|%+-10.2%|\n");
	printf("|%+ -10.2%|\n");
	printf("|%0+-10.2%|\n");
	printf("|%+010.2z%|\n");
	ft_printf("---------------------------------\n");
	ft_printf("|%%|\n");
	ft_printf("|%hh%|\n");
	ft_printf("|%h%|\n");
	ft_printf("|%l%|\n");
	ft_printf("|%ll%|\n");
	ft_printf("|%j%|\n");
	ft_printf("|%z%|\n");
	ft_printf("|%5%|\n");
	ft_printf("|%05%|\n");
	ft_printf("|%0.5%|\n");
	ft_printf("|%+-10.2%|\n");
	ft_printf("|%+ -10.2%|\n");
	ft_printf("|%0+-10.2%|\n");
	ft_printf("|%+010.2z%|\n");

#endif
#ifdef TEST_D

	printf("----------------------------------\n");
	printf("|%+ d|\n", 42);
	printf("|%012zd|\n", 42);
	printf("|%.3d|\n", 42);
	printf("|%05.3d|\n", 42);
	printf("|%zd|\n", 42);
	printf("|%+d|\n", 42);
	printf("|%+-5.3d|\n", 42);
	printf("|%+5.3hd|\n", 42);
	printf("|%5.2hd|\n", 422222);
	printf("{%d}\n", printf("%15.4d", -42));
	printf("{%d}\n", printf("%+.5hhd", (char)422));
	printf("{%d}\n", printf("%.5hhd", (char)422));
	printf("{%d}\n", printf("%+.5d", 422));
	printf("{%d}\n", printf("%+hhd", (char)-42));
	printf("{%d}\n", printf("%+hhd", (char)400000));
	printf("{%d}\n", printf("%+hhd", (char)-400000));
	printf("{%d}\n", printf("test ma gueule"));
	printf("|%hd|\n", (short)2147483649);
	printf("|%hhd|\n", (char)42);
	printf("|%ld|\n", (long)42);
	printf("|%lld|\n", (long long)42);
	printf("|%jd|\n", (intmax_t)42);
	printf("|%zd|\n", (size_t)42);
	/*printf("|%hD|\n", (short)42);
	printf("|%hhD|\n", (char)42);
	printf("|%lD|\n", (long)42);
	printf("|%llD|\n", (long long)42);
	printf("|%jD|\n", (intmax_t)42);
	printf("|%zD|\n", (size_t)42);*/
	printf("|%-5.1i|\n", 42);
	printf("|%+d|\n", 42);
	printf("|%.0d|\n", 0);
	printf("|%d|\n", printf("|%d|", 42));
	printf("|%05.1d|\n", 42);
	printf("|%05.1zd|\n", 42);
	printf("|%05zd|\n", 42);
	printf("|%09.5d|\n", 42);
	printf("|%09.3d|\n", 42);
	printf("|%09.2d|\n", 42);
	printf("|%.5d|\n", 42);
	printf("|%-.5d|\n", 42);
	printf("|% .5d|\n", 42);
	printf("|%+.5d|\n", 42);
	printf("|%.5d|\n", -42);
	printf("|%-.5d|\n", -42);
	printf("|% .5d|\n", -42);
	printf("|%+.5d|\n", -42);
	ft_printf("----------------------------------\n");
	ft_printf("|%+ d|\n", 42);
	ft_printf("|%012zd|\n", 42);
	ft_printf("|%.3d|\n", 42);
	ft_printf("|%05.3d|\n", 42);
	ft_printf("|%zd|\n", 42);
	ft_printf("|%+d|\n", 42);
	ft_printf("|%+-5.3d|\n", 42);
	ft_printf("|%+5.3hd|\n", 42);
	ft_printf("|%5.2hd|\n", 422222);
	ft_printf("{%d}\n", ft_printf("%15.4d", -42));
	ft_printf("{%d}\n", ft_printf("%+.5hhd", 422));
	ft_printf("{%d}\n", ft_printf("%.5hhd", 422));
	ft_printf("{%d}\n", ft_printf("%+.5d", 422));
	ft_printf("{%d}\n", ft_printf("%+hhd", (char)-42));
	ft_printf("{%d}\n", ft_printf("%+hhd", (char)400000));
	ft_printf("{%d}\n", ft_printf("%+hhd", (char)-400000));
	ft_printf("{%d}\n", ft_printf("test ma gueule"));
	ft_printf("|%hd|\n", (short)2147483649);
	ft_printf("|%hhd|\n", (char)42);
	ft_printf("|%ld|\n", (long)42);
	ft_printf("|%lld|\n", (long long)42);
	ft_printf("|%jd|\n", (intmax_t)42);
	ft_printf("|%zd|\n", (size_t)42);
	/*ft_printf("|%hD|\n", (short)42);
	ft_printf("|%hhD|\n", (char)42);
	ft_printf("|%lD|\n", (long)42);
	ft_printf("|%llD|\n", (long long)42);
	ft_printf("|%jD|\n", (intmax_t)42);
	ft_printf("|%zD|\n", (size_t)42);*/
	ft_printf("|%-5.1i|\n", 42);
	ft_printf("|%+d|\n", 42);
	ft_printf("|%.0d|\n", 0);
	ft_printf("|%d|\n", ft_printf("|%d|", 42));
	ft_printf("|%05.1d|\n", 42);
	ft_printf("|%05.1zd|\n", 42);
	ft_printf("|%05zd|\n", 42);
	ft_printf("|%09.5d|\n", 42);
	ft_printf("|%09.3d|\n", 42);
	ft_printf("|%09.2d|\n", 42);
	ft_printf("|%.5d|\n", 42);
	ft_printf("|%-.5d|\n", 42);
	ft_printf("|% .5d|\n", 42);
	ft_printf("|%+.5d|\n", 42);
	ft_printf("|%.5d|\n", -42);
	ft_printf("|%-.5d|\n", -42);
	ft_printf("|% .5d|\n", -42);
	ft_printf("|%+.5d|\n", -42);

#endif
#ifdef TEST_WS

	setlocale(LC_ALL, "");
	printf("----------------------------------\n");
	printf("{%d}\n", printf("{%05.S}", L"42 c est cool"));
	printf("{%d}\n", printf("%.4S", L"我是一只猫。"));
	printf("{%d}\n", printf("%15.4S", L"我是一只猫。"));
	printf("{%d}\n", printf("%4.15S", L"我是一只猫。"));
	printf("{%d}\n", printf("%4.S", L"我是一只猫。"));
	printf("{%d}\n", printf("%4.1S", L"Jambon"));
	printf("{%d}\n", printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
	printf("{%d}\n", printf("%C", L'猫'));
	printf("%zd\n", L'猫');
	ft_printf("----------------------------------\n");
	ft_printf("{%d}\n", ft_printf("{%05.S}", L"42 c est cool"));
	ft_printf("{%d}\n", ft_printf("%.4S", L"我是一只猫。"));
	ft_printf("{%d}\n", ft_printf("%15.4S", L"我是一只猫。"));
	ft_printf("{%d}\n", ft_printf("%4.15S", L"我是一只猫。"));
	ft_printf("{%d}\n", ft_printf("%4.S", L"我是一只猫。"));
	ft_printf("{%d}\n", ft_printf("%4.1S", L"Jambon"));
	ft_printf("{%d}\n", ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
	ft_printf("{%d}\n", ft_printf("%C", L'猫'));
	ft_printf("%zd\n", L'猫');

#endif

	return (0);
}
