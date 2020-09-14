using System;

namespace Above_Average
{
    class Program
    {
        static void Main(string[] args)
        {
            int c = int.Parse(Console.ReadLine());
            for (int i = 0; i < c; i++)
            {
                string[] s = Console.ReadLine().Split();
                float n = float.Parse(s[0]);
                float[] v = new float[int.Parse(s[0])];
                float average = 0;
                float amountAbove = 0;
                for (int j = 0; j < n; j++)
                {
                    v[j] = float.Parse(s[j + 1]);
                    average += v[j];
                }
                average /= n;
                for (int l = 0; l < n; l++)
                {
                    if (v[l] > average)
                    {
                        amountAbove++;
                    }
                }
                float totP = (amountAbove / n) * 100;
                Console.WriteLine(totP.ToString("0.000").Replace(',', '.') + "%");
            }
        }
    }
}
