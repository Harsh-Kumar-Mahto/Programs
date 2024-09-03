// Bucket array is the array in which key and value are stored indexes like 0,1,2.. are mapped as keys using Hash Functions and data in array block is the value
// Hash Function is a combination of Hash Code and Compressions function 
// Conversion of any type of key(string,class,object etc) into int for mapping it as array indices is done by Hash Code
// Compression function is responsible to convert the int value received from Hash code so that it comes in the required range

// Hash Code can be of different type: It is very important to write the hash code that can easily distribute the keys uniformly
// 1:Identity- Assume if the key is number itself,it can be directly used
// 2:String Conversion- Different approaches can be used to convert a string into int for example adding the ASCII codes

// Assume that there are two strings: 1."babbar" & 2."babbra"
// If we follow the approach of adding ASCII codes both will give the same result and hence will be mapped to the same indeces.This is known as "Collision"

// Collision Handling is done to tackle these situations:1.Open Hashing(Closed addressing)  2.Closed Hashing(Open Addressing)
// In open hashing/closed addressing, the head of a linklist is stored in the array so different keys that point the same array block can be added in the linklist whose head is stored at that index(separate chaining)
// In closed hasing/open addressing, in this once an index is filled the other element demanding the same index is sent to the next index which is decided by some kind of function

// These function are based on the formula Hi(a)=h(a)+Fi(a)
// Some of the methods are:
// 1.Linear probing:In this Fi(a)=i.Consider 7th index is filled than the next element demanding it is sent to 7+1 index i.e 8.next is sent at 9,10,11....
// 2.Quadratic probing:Fi(a)=i^2. In above example element will be filled as 7+(1^2) i.e 8,than 7+(2^2) i.e 11 than 16 and so on.

// More theory after 55 mins
// Load factor(n/b):n is number is words and b is the size of bucket for hashing
// It should ideally be less that 0.7