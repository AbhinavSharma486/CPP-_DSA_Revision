// ^ Print this pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * 10 10 10 10 10
// * 10 10 10 10 10
// * 10 10 10 10 10
// * 10 10 10 10 10

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 4, col = 5;

//   for (row = 1; row <= 4; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << "10 ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * 1 1 1 1 1
// * 2 2 2 2 2
// * 3 3 3 3 3
// * 4 4 4 4 4
// * 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << row << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * 1 2 3 4 5
// * 1 2 3 4 5
// * 1 2 3 4 5
// * 1 2 3 4 5
// * 1 2 3 4 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * 5 4 3 2 1
// * 5 4 3 2 1
// * 5 4 3 2 1
// * 5 4 3 2 1
// * 5 4 3 2 1

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 5; row >= 1; row--)
//   {
//     for (col = 5; col >= 1; col--)
//     {
//       cout << col << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * 1 4 9 16 25
// * 1 4 9 16 25
// * 1 4 9 16 25
// * 1 4 9 16 25
// * 1 4 9 16 25

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << col * col << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * a a a a a
// * b b b b b
// * c c c c c
// * d d d d d
// * e e e e e

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row = 5, col = 5;

//   for (row = 1; row <= 5; row++)
//   {
//     char ch = 'a' + (row - 1);
//     for (col = 1; col <= 5; col++)
//     {
//       cout << ch << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// * a b c d e
// * a b c d e
// * a b c d e
// * a b c d e
// * a b c d e

// #include <iostream>
// using namespace std;
// int main()
// {
//   for (int row = 1; row <= 5; row++)
//   {
//     for (int col = 1; col <= 5; col++)
//     {
//       char ch = 'a' + (col - 1);
//       cout << ch << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ^ Print this pattern
// *  1  2  3  4  5
// *  6  7  8  9 10
// * 11 12 13 14 15
// * 16 17 18 19 20
// * 21 22 23 24 25

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;
//   int i = 1;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << i << " ";
//       i++;
//     }
//     cout << endl;
//   }

//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// ! Homework start from here

// * 1 First Pattern:
// & 4 4 4 4 4 4
// & 4 4 4 4 4 4
// & 4 4 4 4 4 4
// & 4 4 4 4 4 4
// & 4 4 4 4 4 4

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;
//   int i = 4;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// * 2 Second Pattern:

// & 1 4 9 16 25
// & 1 4 9 16 25
// & 1 4 9 16 25
// & 1 4 9 16 25
// & 1 4 9 16 25
// & 1 4 9 16 25

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 5; row++)
//   {
//     for (col = 1; col <= 5; col++)
//     {
//       cout << col * col << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// * 3 Third Pattern :

// & 1 8 27 64 125 216
// & 1 8 27 64 125 216
// & 1 8 27 64 125 216
// & 1 8 27 64 125 216
// & 1 8 27 64 125 216

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 6; row++)
//   {
//     for (col = 1; col <= 6; col++)
//     {
//       cout << col * col * col << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// ----------------------------------------------------------------------------------------------

// * 4. Four Pattern :
// & F G H I J K
// & F G H I J K
// & F G H I J K
// & F G H I J K
// & F G H I J K

// #include <iostream>
// using namespace std;
// int main()
// {
//   int row, col;

//   for (row = 1; row <= 6; row++)
//   {
//     char ch = 'F';
//     for (col = 1; col <= 6; col++)
//     {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }

//   return 0;
// }