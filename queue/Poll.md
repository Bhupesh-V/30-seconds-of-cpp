**Description** : poll() method of Queue Interface returns and removes the element at the front the container. It deletes the element in the container. The method does not throws an exception when the Queue is empty, it returns null instead.

**Example**:
```java
    import java.util.*; 

public class GFG { 
	public static void main(String[] args) 
		throws IllegalStateException 
	{ 

		// create object of Queue 
		Queue<Integer> Q 
			= new LinkedList<Integer>(); 

		// Add numbers to end of Queue 
		Q.add(7855642); 
		Q.add(35658786); 
		Q.add(5278367); 
		Q.add(74381793); 

		// print queue 
		System.out.println("Queue: " + Q); 

		// print head and deletes the head 
		System.out.println("Queue's head: " + Q.poll()); 

		// print head and deleted the head 
		System.out.println("Queue's head: " + Q.poll()); 
	} 
} 

```
