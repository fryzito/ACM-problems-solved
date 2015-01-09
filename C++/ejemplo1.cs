using System;
using System.Windows.Forms;

public class ejemplo1 {
	public static void Main(string[] args) 	{
		Console.WriteLine("Hola mundo desde C#");
		Console.WriteLine("Ingresa 2 numero uno por linea");
		int a=int.Parse(Console.ReadLine());
		int b=int.Parse(Console.ReadLine());
		int rpta = a+b;
		Console.WriteLine("suma es :"+rpta.ToString());
		Console.ReadKey();
	}
}

