# bubble_sort 

**Description :** Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps 
through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is
repeated until the list is sorted.

**Example** :
```
int main(void)
{
    int size = 0, num[50], i = 0, j = 0, temp = 0;
    printf("ENTER SIZE OF THE ARRAY : ");
    scanf("%i", &size);

    printf("ENTER ARRAY ELEMENTS : ");
    
    for (i = 0; i < size; i++)
    {
        scanf("%i", &num[i]);
    }

    for (i = 0; i < size-1; i++)
    {
        for (j = 0; j < (size - 1)-i; j++)
        {
            if (num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("YOUR SORTED ARRAY IS : ");
    for (i = 0; i < size; i++)
    {
        printf("%i ", num[i]);
    }
    printf("\n");

return 0;
}

```
**[Run Code](https://rextester.com/BMAXL71876)**
