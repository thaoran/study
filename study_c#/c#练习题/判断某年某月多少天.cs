using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3.判断某年某月的天数
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("输入年份");
            try
            {
                int year = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("输入月份");
                try
                {
                    int mouth = Convert.ToInt32(Console.ReadLine());
                    if (mouth >= 1 & mouth <= 12)
                    {
                        int day = 0;
                        switch (mouth)
                        {
                            case 1:
                            case 3:
                            case 5:
                            case 7:
                            case 8:
                            case 10:
                            case 12:
                                //Console.WriteLine("{0}年{1}月有{2}天", year, mouth, 31);
                                day = 31;
                                break;
                            case 4:
                            case 6:
                            case 9:
                            case 11:
                                //Console.WriteLine("{0}年{1}月有{2}天", year, mouth, 30);
                                break;
                            case 2:
                                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                                {
                                    day = 29;
                                }
                                else
                                {
                                    day = 28;
                                }
                                break;
                            default:
                                break;
                        }
                        Console.WriteLine("{0}年{1}月有{2}天", year, mouth, day);
                    }//判断月份范围的if
                    else
                    {
                        Console.WriteLine("输入月份不符合范围");
                    }
                }//try月份
                catch//月份的try
                {
                    Console.WriteLine("输入月份有误.程序退出");
                }
            }//try年份的括号
            catch//年份的try
            {
                Console.WriteLine("输入年份有误.程序退出");
            }
            Console.ReadKey();
        }
    }
}
