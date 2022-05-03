/*
    Author : David ;)
    Date : Date format 03/05/2022
    Time : Time format 11:19
    Description : Bubblle sort the simplest type of algorthim sorting.
*/

def bubble_sort(list):
    n = len(list)

    for i in range(n-1):
        for j in range(n-1):
            if list[j] > list[j+1]: 
                tmp = list[j]
                list[j] = list[j+1]
                list[j+1] = tmp

    return list
   

int main() {
    list = [100,4,5,6]
    bubble_sort(list)
    print(list)
                            
    }
