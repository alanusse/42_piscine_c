#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int counter;
    
    counter = 0;
    if (size > 0)
    {
        while(counter < size)
        {
            if (counter == size - 1)
            {
              dest[counter] = '\0';
            }
            else
            {
              dest[counter] = src[counter];
            }
            counter++;
        }
    }
    
    return (size);
}

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %i\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
