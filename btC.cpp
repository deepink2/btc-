using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace btC
{
    class GIaipt
    {

        public void ptb1(double a, double b)
        {
            Console.WriteLine("\ngiai phuong trinh bac nhat Ax+b=0\n");
            if (a == 0)
                if (b == 0) Console.WriteLine("\nPt co vo so nghiem");
                else Console.WriteLine("\nPt vo nghiem");
            else Console.WriteLine("\nPt co nghiem la: {0}",Convert.ToDouble(-b / a));
        }

        double delta(double a, double b, double c)
        {
            return  Convert.ToDouble(b * b - 4 * a * c);
        }
        
        void ptb2(double a, double b, double c)
        {
            Console.WriteLine("\ngiai phuong trinh bac Hai Ax^2+bx+c=0\n");
            double d = delta(a, b, c);
            double x1, x2;

            x1 = Convert.ToDouble((-b - Math.Sqrt(d)) / 2 / a);
            x2 = Convert.ToDouble((-b + Math.Sqrt(d)) / 2 / a);

            Console.WriteLine("\nDelta: ",d);
            if (d > 0)
            {
                Console.WriteLine("\nphuong trinh co hai nghiem phan biet\n");
                Console.WriteLine("x1: {0} | x2: {1}",x1,x2);
            }

            else if (d == 0)
            {
                Console.WriteLine("\nphuong trinh co 1 nghiem\n");
                Console.WriteLine("x: ", -b / 2 / a);
            }

            else
                Console.WriteLine("\nphuong trinh vo nghiem\n");
        }



        static void Main(string[] args)
        {
            double a, b, c;
            Console.WriteLine("Nhap a: ");
            a=Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Nhap b: ");
            b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Nhap c: ");
            c = Convert.ToDouble(Console.ReadLine());

            GIaipt gpt = new GIaipt();
            gpt.ptb1(a, b);
            gpt.ptb2(a, b,c);
            Console.ReadKey();
        }
    }
}
