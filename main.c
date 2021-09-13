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
	char *str;
	str = NULL;
//*********** CONV % ->PB avec % quand pas d argument variadique
//test du debut ou cela segfaut
	//ret_m = ft_printf("%5%");
	//ret_v = printf("%5%");

//	printf("%32000000000%\n");
	//ret_m = ft_printf("%5");
		ret_m = printf("%s", NULL);
	//	ret_v = printf("%5p", 0);
		//printf("%-05%\n");

	//Null specifier tests ->no crash
//printf("%5");
//printf("%!5");
//
//	printf("%05");
//ret_m = ft_printf("%5%\n");
//ret_v = printf("%5%\n");

/*
	//ft_printf("%5");
	//ft_printf("%5%");

	//test("%5");
	//test("%05");
	 //test("%-05");
	//test("%-5");

	//ft_printf("%32000000000%\n");
	//printf("%-5%\n");
		//ft_printf("%05%\n");
		//ft_printf("%-05%\n");
	//Null specifier tests ->no crash
	//ft_printf("%\n");

//%% Tests
int pct_basic(void){return test("%%");}
int pct_5w(void){return test("%5%");}
int pct_5wlj(void){return test("%-5%");}
int pct_5wzp(void){return test("%05%");}
int pct_5wljzp(void){return test("%-05%");}
//Null specifier tests
 int nocrash_notrequired_nullspec_basic(void){return test("%");}
 int nocrash_notrequired_nullspec_5w(void){return test("%5");}
 int nocrash_notrequired_nullspec_5wzp(void){return test("%05");}
 int nocrash_notrequired_nullspec_5wzplj(void){return test("%-05");}
 int nocrash_notrequired_nullspec_5wlj(void){return test("%-5");}

*/
//PB AVEC *.* -->NOMBRES NEGATIFS NON PRIS EN CHARGE

//******* CONV C ->

	//********test 16 uNKNOWN PB au niveau d un code ASCII.... =ca me met \x00 entre le - et le .
//	ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	//printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');


//	***** CONV S  ->PB avec NULL et n et p

	//test 54	expected output : "  hello  world"
	//			your output     : "helloworld"
//ret_m = ft_printf("r:%s:\n", NULL);
//ret_v = printf("v:%s:\n", NULL);
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
//printf("ret_v = %d\n", ret_v);
printf("ret_m = %d\n", ret_m);

return (0);
}
