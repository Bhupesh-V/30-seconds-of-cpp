# linearsearch
**Description**: The linearsearch() is used to search an element in an array and find its index and position.

#include<iostream>

int main(){
        int size,i,flag=0,item;
        
        std::cout<<"Enter size of array: ";
        std::cin>>size;
        int arr[size];
        //entering elements in array

        std::cout<<"\nEnter elements in array: ";

        for(i=0;i<size;i++){
                std::cout<<"\nEnter element "<<i+1<<": ";
                std::cin>>arr[i];
        }
        std::cout<<"\nEnter element to search: ";
        std::cin>>item;

        //searching for item

        for(i=0;i<size;i++){

                if(item==arr[i]){
                        std::cout<<"\nItem "<<item<<" found at index:"<<i;
                        std::cout<<"\nItem "<<item<<" found at position:"<<i+1;
                        flag=1;
                        break;
                }
        }
        if(flag==0){
                std::cout<<"\nElement not found!";
        }


return 0;
}
