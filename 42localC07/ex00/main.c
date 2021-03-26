int main(void)
{
    char s1[] = "Hello World!";
    printf("Source is: %s\n", s1);
    printf("Source is: %p\n", s1);
    ft_strdup(s1);
    printf("Source is: %p\n", s1);
    return (0);
}
