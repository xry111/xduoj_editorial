import java.io.BufferedInputStream;
import java.math.BigInteger;
import java.util.Scanner;

/* Author: zh0ng */
public class Main {

	public static void main(String[] args) {
		Scanner cin=new Scanner(new BufferedInputStream(System.in));
		
		while(cin.hasNext()){
			int n=cin.nextInt();
			BigInteger a= cin.nextBigInteger(n);
			BigInteger b=cin.nextBigInteger(n);
			System.out.println(a.add(b).toString(n).toUpperCase());
		}

	}

}

