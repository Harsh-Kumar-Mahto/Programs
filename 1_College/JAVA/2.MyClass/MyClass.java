public class MyClass {

	public static void main(String[] args) {
		System.out.print("hello");
		System.out.println("hello");       //println takes to next line of console when this line gets executed.
		System.out.println("hello"+3+'x'); //'+' here acts as concatenator as char can't be added to number so converts number(3) to char.
		System.out.println("hello"+3+5);   //Associativity of '+' works i.e. left to right and therefore concatenation takes place.
		System.out.println(3+5+"hello");   //Associativity of '+' works i.e. left to right and hence first 3 and 5 are added and then second '+' concatenates 8 and char

	}

}
