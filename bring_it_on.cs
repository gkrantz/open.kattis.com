using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BringItOn
{
    public class BringItOn
    {
        static void Main(string[] args)
        {
            var lib = new Library();
            int result = 0;
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; ++i)
            {
                Console.WriteLine(lib.AddWord(Console.ReadLine()));
            }
        }
    }

    public class Library
    {
        LetterNode root;
        public Library()
        {
            root = new LetterNode(' ');
        }

        public int AddWord(string word)
        {
            bool exists = true;
            LetterNode current = root;
            foreach (char c in word)
            {
                bool found = false;
                if (exists)
                    foreach (var node in current.nextList)
                    {
                        if (node.val == c)
                        {
                            ++node.count;
                            found = true;
                            current = node;
                            break;
                        }
                    }
                if (!found)
                {
                    current.nextList.Add(new LetterNode(c));
                    current = current.nextList.Last();
                    exists = false;
                }
            }
            //current.nextList.Add(new LetterNode('*')); // Not needed for this problem.
            return current.count - 1;
        }
    }

    public class LetterNode
    {
        public char val;
        public List<LetterNode> nextList;
        public int count;
        public LetterNode(char c)
        {
            count = 1;
            val = c;
            nextList = new List<LetterNode>();
        }
    }
}