using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03
{
    class Program
    {
        static void Main(string[] args)
        {
            //����10������ ͨ��һ��ѭ�� ȥ�������Ǹ��Դ��к��ķ���
            //Student s = new Student();
            //Person p = new Person();
            //ShuaiGuo sg = new ShuaiGuo();

            Person[] pers = new Person[10];
            Random r = new Random();
            for (int i = 0; i < pers.Length; i++)
            {
                int rNumber = r.Next(1, 7);
                switch (rNumber)//1-6
                {
                    case 1: pers[i] = new Student();
                        break;
                    case 2: pers[i] = new Teacher();
                        break;
                    case 3: pers[i] = new ShuaiGuo();
                        break;
                    case 4: pers[i] = new MeiLv();
                        break;
                    case 5: pers[i] = new YeShou();
                        break;
                    case 6: pers[i] = new Person();
                        break;
                }
            }
            for (int i = 0; i < pers.Length; i++)
            {
               // pers[i].PersonSayHi();
                if (pers[i] is Student)
                {
                    ((Student)pers[i]).StudentSayHi();
               //  pers[i].PersonSayHi();
                }
                else if (pers[i] is Teacher)
                {
                    ((Teacher)pers[i]).TeacherSayHi();
                }
                else if (pers[i] is ShuaiGuo)
                {
                    ((ShuaiGuo)pers[i]).ShuaiGuoSayHi();
                }
                else if (pers[i] is YeShou)
                {
                    ((YeShou)pers[i]).YeShouSayHi();
                }
                else if (pers[i] is MeiLv)
                {
                    ((MeiLv)pers[i]).MeiLvSayHi();
                }
                else 
                {
                    pers[i].PersonSayHi();
                }

            }
            Console.ReadKey();

        }
    }

    public class Person
    {
        public void PersonSayHi()
        {
            Console.WriteLine("��������");
        }
    }


    public class Student : Person
    {
        public void StudentSayHi()
        {
            Console.WriteLine("����ѧ��");
        }
    }

    public class Teacher : Person
    {
        public void TeacherSayHi()
        {
            Console.WriteLine("������ʦ");
        }
    }


    public class MeiLv : Person
    {
        public void MeiLvSayHi()
        {
            Console.WriteLine("����þ��");
        }
    }


    public class ShuaiGuo : Person
    {
        public void ShuaiGuoSayHi()
        {
            Console.WriteLine("����˧��");
        }
    }


    public class YeShou : Person
    {
        public void YeShouSayHi()
        {
            Console.WriteLine("����Ұ��");
        }
    }


}
