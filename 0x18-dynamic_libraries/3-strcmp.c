/**
 * main: _strcmp - compares two strings
 * Description: a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 * FYI: The standard library provides a similar function: strcmp.
 * Run man strcmp to learn more.
 * @s1: A pointer to a character that will be changed
 * @s2: A pointer to a character that will also be changed/modified/updated
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
char *str_one = s1;

char *str_two = s2;

while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str_one++;

str_two++;
}

return (*str_one - *str_two);
}
