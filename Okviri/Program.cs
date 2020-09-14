using System;

namespace Okviri
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] s = Console.ReadLine().ToCharArray();
            string[] rows = new string[5];
            int counter = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (i == 0)
                {
                    rows[0] += "..#..";
                    rows[1] += ".#.#.";
                    rows[2] += "#." + s[i] + ".#";
                    rows[3] += ".#.#.";
                    rows[4] += "..#..";
                    counter++;
                }
                else if (counter == 0 && i != 0)
                {
                    rows[0] += ".#..";
                    rows[1] += "#.#.";
                    rows[2] += "." + s[i] + ".#";
                    rows[3] += "#.#.";
                    rows[4] += ".#..";
                    counter++;
                }
                else if (counter == 1 && i != s.Length - 1)
                {
                    rows[0] += ".#.";
                    rows[1] += "#.#";
                    rows[2] += "." + s[i] + ".";
                    rows[3] += "#.#";
                    rows[4] += ".#.";
                    counter++;
                }
                else if (counter == 1 && i == s.Length - 1)
                {
                    rows[0] += ".#..";
                    rows[1] += "#.#.";
                    rows[2] += "." + s[i] + ".#";
                    rows[3] += "#.#.";
                    rows[4] += ".#..";
                    counter++;
                }
                else if (counter == 2)
                {
                    rows[0] += "..*..";
                    rows[1] += ".*.*.";
                    rows[2] += "*." + s[i] + ".*";
                    rows[3] += ".*.*.";
                    rows[4] += "..*..";
                    counter = 0;
                }
            }
            for (int j = 0; j < 5; j++)
            {
                Console.WriteLine(rows[j]);
            }
        }
    }
}
