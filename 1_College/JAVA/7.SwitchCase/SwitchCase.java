import java.util.Scanner;
public class SwitchCase 
{
	public static void main(String[] args) 
	{
		 char ch;
		 String str;
		 Scanner input=new Scanner(System.in);
		 System.out.println("Enter any character in small letters: ");
		 str=input.next();
		 ch=str.charAt(0);
		 /*switch(ch)
		 {
		 case 'a':System.out.println(ch+" is Vowel");
		 break;
		 case 'e':System.out.println(ch+" is Vowel");
		 break;
		 case 'i':System.out.println(ch+" is Vowel");
		 break;
		 case 'o':System.out.println(ch+" is Vowel");
		 break;
		 case 'u':System.out.println(ch+" is Vowel");
		 break;
		 default:System.out.println(ch+" is Consonant");
		 }*/
		 if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
			 System.out.println(ch+" is Vowel");
		 else
			 System.out.println(ch+" is Consonatant");
	}

}
