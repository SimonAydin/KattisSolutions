using System;

namespace Combination_Lock
{
    class Program
    {
        static void Main(string[] args)
        {
            string line;
            while ((line = Console.ReadLine()) != null)
            {
                int deegres = 120;
                string[] split = line.Split(new char[] { ' ' }, StringSplitOptions.None);
                int a = int.Parse(split[0]), b = int.Parse(split[1]), c = int.Parse(split[2]), d = int.Parse(split[3]);
                if (a == 0 && b == 0 && c == 0 && d == 0)
                {
                    break;
                }
                deegres += clockWiseCount(a, b) + counterClockwiseCount(b, c) + clockWiseCount(c, d);
                deegres *= 9;
                Console.WriteLine(deegres);
            }
        }

        static int clockWiseCount(int numberOne, int numberTwo)
        {
            numberOne += 40 - numberTwo;
            numberOne %= 40;
            return numberOne;
        }

        static int counterClockwiseCount(int numberOne, int numberTwo)
        {
            numberTwo += 40 - numberOne;
            numberTwo %= 40;
            return numberTwo;
        }
    }
}