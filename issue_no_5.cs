using System;

public class Program
{
    public static void Main(string[] args)
    {
        int[] numbers = { 10, 20, 30, 40, 50 };
        int sum = 0;
        foreach (int num in numbers)
        {
            sum+=num;
        }
        double average = (double)sum / numbers.Length;
        Console.WriteLine("Average of the numbers: " + average);
    }
}

// output : 30