/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:31:05 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/08/24 08:13:42 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	int	ret_v;
	int	ret_m;
//*********** CONV % ->PB avec % quand pas d argument variadique
//test du debut ou cela segfaut
	//ft_printf("%5%");
	//printf("%5%");
		//test("%-5%");
		//test("%05%");
		//test("%-05%");}
	//Null specifier tests ->no crash
	//test("%");
	//test("%5");
	//test("%05");
	 //test("%-05");
	//test("%-5");






//PB AVEC *.* -->NOMBRES NEGATIFS NON PRIS EN CHARGE

//******* CONV C ->

	//********test 16 uNKNOWN PB au niveau d un code ASCII.... =ca me met \x00 entre le - et le .
//	ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	//printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');


//	***** CONV S  ->PB avec NULL et n et p

	//test 54	expected output : "  hello  world"
	//			your output     : "helloworld"
ret_m = ft_printf("r:%7s::%7s:\n", 0, "world");
ret_v = printf("v:%7s::%7s:\n", 0, "world");
	//test 91 expected output : ""
			//your output     : "(nu"

	//test("%.03s", NULL)
//
	//printf("v:%16.*s:\n", -10, NULL);
	//ft_printf("r:%16.*s:\n", -10, NULL);

	//Test 126 (s_prec_perfect_width_6_s_nullchar) : FAILED.//tester avec %d le mem cas
		//First line of code: {return test("%6.6s", "
		 // expected output : "      "
		 // your output     : ""
//test("%6.6s", "
//test("%3.6s", "








	//ft_printf("r:%*.*d:\n", 19, 14, 42);







	/*
	int	ret_v;
	int	ret_m;
	int	n;

	n = 65;
	ret_v = printf("vrai libelle projet bientot %% :%-2.*d: :%0108.20d: :%+*.121d: :%20.5s: :%#x: :%20p: termine\n", 4, n, n, 12, n, "bonjour", n, &n);
 ret_m = ft_printf("raiv libelle projet bientot %% :%-2.*d: :%0108.20d: :%+*.121d: :%20.5s: :%#x: :%20p: termine\n", 4, n, n, 12, n, "bonjour", n, &n);
	ret_v = printf("v:%010.0d:\n",0);
	ret_m = ft_printf("r:%010.0d:\n", 0);

	ret_v = printf(":%0.0u:\n", 0);
	ret_m = ft_printf(":%0.0u:\n", 0);

*/
printf("ret_v = %d\n", ret_v);
printf("ret_m = %d\n", ret_m);

return (0);
}
