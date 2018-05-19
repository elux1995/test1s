using System;
namespace Zadanie21
	// Zadanie 2.1
{
	class Program
	{
		static void Main(string[] args)
		{
			int a, b, c;
			Console.WriteLine("Program sprawdza, czy wczytane liczby a, b, c to
				trójka pitagorejska.");
				Console.WriteLine("Podaj a.");
			a = int.Parse(Console.ReadLine());
			Console.WriteLine("Podaj b.");
			b = int.Parse(Console.ReadLine());
			Console.WriteLine("Podaj c.");
			c = int.Parse(Console.ReadLine());
			if ((a*a + b * b) == c * c)
			{
				Console.Write("Liczby ");
				Console.Write("a = " + a + ", ");
				Console.Write("b = " + b + ", ");
				Console.Write("c = " + c);
				Console.Write(" s trójk pitagorejska");
			}
			else
			{
				Console.Write("Liczby ");
				Console.Write("a = " + a + ", ");
				Console.Write("b = " + b + ", ");
				Console.Write("c = " + c);
				Console.Write(" nie s trójk pitagorejska");
			}
			Console.Read();
			// nacinij klawisz Enter
		}
	}
}