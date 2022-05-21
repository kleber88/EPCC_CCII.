int main ()
{
int Y=0,X=0;
char Z[50];
printf("Digite las palabras\n");

gets(Z);
while(Z[X] != '\0')
{
printf("%c",Z[X]);
X++;

}
printf("\nLa palabra invertida es: %s", strrev(Z));

}
