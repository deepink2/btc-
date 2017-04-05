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

class tinhtoan
        {
            public float _5a(int n)
            {
                float s = 0;
                for (int i = 1; i <= n; i++) {
                    s += 1/(float)i;
                    //Console.WriteLine("{0} | {1}",i,s);
                }
                return s;
            }




            public int _5c(int n)
            {
                int s = 0;
                for (int i = 1; i <= n; i++)
                {
                    //Console.WriteLine("{0} | {1}| {2}", i,i*i*i,s);
                    s += i*i*i;
                }
                return s;
            }
            public float _5b(int n)
            {
                float s = 0;
                for (int i = 1; i <= n; i++)
                {
                    //Console.WriteLine("{0} | {1}| {2}", i, 1 / (float)i * (i + 1), s);
                    s += 1/(float)(i*(i+1));
                }
                return s;
            }

            public int _5d(int n)
            {
                int s = 0,sign = -1; ;

                for (int i = 1; i <= n; i++)
                {
                    //Console.WriteLine("{0} | {1}| {2}", i, sign, s);
                    s += sign*i;

                    sign = -sign;
                }
                return s;
            }

            public float _6b(int n)
            {
                float s = 0;

                for (int i = 1; i <= n; i++)
                {
                    Console.WriteLine("{0} | {1}| {2}", i, 2*i-1,s);
                    s += (2 * i - 1) / (float)i;

                }
                return s;
            }

            public float _6c(int n)
            {
                float s = 0;

                for (int i = 1; i <= n; i++)
                {
                    Console.WriteLine("{0} | {1}| {2}", i, 2 * i - 1, s);
                    s += (2 * i - 1) / (float)(2*i);

                }
                return s;
            }

            public float _6d(int n)
            {
                float s = 0;

                for (int i = 1; i <= n; i++)
                {
                    Console.WriteLine("{0} | {1}| {2}", i, 2 * i - 1, s);
                    s += 1+(1/(float)(i));

                }
                return s;
            }

            public void _7()
            {
                float donvi,tram,t = 0;

                for (int i = 100; i<=999; i++)
                {
                    donvi = i % 10;
                    tram = i / 100;
                    if (donvi== tram)
                        Console.WriteLine("{0} | {1}| {2}", i, tram , donvi);

                }
            }

            public int _8(int n)
            {
                int x = n;
                int i,s = 0;

                    while (x > 0)
                    {
                        i = x % 10;
                        x = x / 10;
                        s += i;
                        Console.WriteLine("{0} | {1}| {2}", x, i, s);
                    }
                return s;
            }


        }



        static void Main(string[] args)
        {
            //double a, b, c;
            //Console.WriteLine("Nhap a: ");
            //a=Convert.ToDouble(Console.ReadLine());

            //Console.WriteLine("Nhap b: ");
            //b = Convert.ToDouble(Console.ReadLine());

            //Console.WriteLine("Nhap c: ");
            //c = Convert.ToDouble(Console.ReadLine());
            //GIaipt gpt = new GIaipt();
            //gpt.ptb1(a, b);
            //gpt.ptb2(a, b,c);

            int n;
            tinhtoan t = new tinhtoan();
            Console.WriteLine("Nhap n: ");
            n =int.Parse(Console.ReadLine());
            //Console.WriteLine("Result: {0}",t._5a(n));
            //Console.WriteLine("Result: {0}", t._5b(n));
            //Console.WriteLine("Result: {0}", t._5c(n));
            //Console.WriteLine("Result: {0}", t._5d(n));

            //Console.WriteLine("Result: {0}", t._6b(n));
            //Console.WriteLine("Result: {0}", t._6c(n));
            //Console.WriteLine("Result: {0}", t._6d(n));
            //t._7();
            Console.WriteLine("Result: {0}", t._8(n));
            Console.ReadKey();
        }
    }
}
