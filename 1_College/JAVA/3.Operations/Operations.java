public class Operations {

	public static void main(String[] args) {
		byte a=10,b=20;
		int z; //z can't be declared as byte as the result a+b is automatically stored as int.
		z=a+b;
		System.out.println(z);//gives30
		System.out.println(a-b);//gives -10
		System.out.println(a*b);//gives 200
		double p=1.0*a/b;  //1.0 is necessary otherwise a/b will give a int result i.e 0 in place of 0.5
		System.out.println(p);
		
		//int and double are default data types.
		//boolean always gives true or false results either through relations or directly we can assign true or false
		boolean x=5>6;
		boolean y=true;
		System.out.println(x);//false
		System.out.println(y);//true
		System.out.println(20<10);//false
		
	}

}
