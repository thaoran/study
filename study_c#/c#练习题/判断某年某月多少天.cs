using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3.�ж�ĳ��ĳ�µ�����
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("�������");
            try
            {
                int year = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("�����·�");
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
                                //Console.WriteLine("{0}��{1}����{2}��", year, mouth, 31);
                                day = 31;
                                break;
                            case 4:
                            case 6:
                            case 9:
                            case 11:
                                //Console.WriteLine("{0}��{1}����{2}��", year, mouth, 30);
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
                        Console.WriteLine("{0}��{1}����{2}��", year, mouth, day);
                    }//�ж��·ݷ�Χ��if
                    else
                    {
                        Console.WriteLine("�����·ݲ����Ϸ�Χ");
                    }
                }//try�·�
                catch//�·ݵ�try
                {
                    Console.WriteLine("�����·�����.�����˳�");
                }
            }//try��ݵ�����
            catch//��ݵ�try
            {
                Console.WriteLine("�����������.�����˳�");
            }
            Console.ReadKey();
        }
    }
}
