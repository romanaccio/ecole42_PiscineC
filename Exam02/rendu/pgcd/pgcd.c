#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_liste(int *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int *liste_diviseurs(int n)
{
	int l = 0;
	int diviseur;
	int *tab;
	int i;

	diviseur = n - 1;
	while (diviseur) 
	{
		if ((n % diviseur) == 0)
			l++;
		diviseur--;
	}
	tab = malloc(sizeof(*tab) * (l+1));
	diviseur = n - 1;
	i = 0;
	while (diviseur) 
	{
		if ((n % diviseur) == 0)
		{
			tab[i] = diviseur;
			i++;
		}
		diviseur--;
	}
	tab[i] = 0;
	return (tab);
}

int pgcd (int a, int b)
{
	int tmp;
	int i;
	int j;
	int *tab_a;
	int *tab_b;

	if (b > a)
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	if (a == b)
		return (a);
	if ((a % b) == 0)
		return (b);
	tab_a = liste_diviseurs(a);
	tab_b = liste_diviseurs(b);
	i = 0;
	while (tab_a[i])
	{
		j = 0;
		while (tab_b[j])
		{
			if (tab_a[i] == tab_b[j])
				return (tab_a[i]);
			j++;
		}
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", pgcd(a, b));
}
