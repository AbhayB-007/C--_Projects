#include <bits/stdc++.h>
#include <windows.h>
#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <signal.h>

using namespace std;

void Hack_Sleep_Func()
{
     while (1)
     {
          int i1 = 1;
          system("cls");
          cout << "\n\tFinding Vulnerabilities";
          while (i1 < 6)
          {
               Sleep(450);
               cout << ".";
               if (i1 == 3)
               {
                    while (i1 < 6)
                    {
                         Sleep(450);
                         cout << "!";
                         i1++;
                    }
               }
               i1++;
          }
          cout << "\n_________________________________________________\n"
               << endl;
          Sleep(1500);
          cout << "\t";
          i1 = 0;
          while (i1 < 5)
          {
               Sleep(200);
               cout << ">";
               i1++;
          }
          cout << " Start Exploiting ";
          while (i1 < 10)
          {
               Sleep(200);
               cout << "<";
               i1++;
          }
          cout << "\n_________________________________________________\n"
               << endl;

          Sleep(1500);

          for (int i = 10; i <= 100; i += 10)
          {
               Sleep(400);
               cout << " Exploited " << i << "%";
               Sleep(200);
               cout << ".";
               Sleep(200);
               cout << ".";
               Sleep(200);
               cout << ".";
               Sleep(200);
               cout << "!";
               Sleep(200);
               cout << "!" << endl;
          }
          cout << "_________________________________________________\n"
               << endl;
          Sleep(1500);
          cout << "\n  All Vulnerabilities Exploited";
          i1 = 0;
          while (i1 < 3)
          {
               Sleep(250);                  
               cout << ".";
               i1++;
          }
          cout << "};-]" << endl;
          cout << "\n_________________________________________________\n"
               << endl;
          Sleep(2000);

          system("cls");
          Sleep(1500);
          cout << "\n\n_________________________________________________\n\n";
          cout << "\n\t\tAccess Granted";
          cout << "\n\n_________________________________________________";
          Sleep(2000);
          system("cls");
          cout << "\n\n_________________________________________________\n\n";
          cout << "\nCongratulations yr Hacked and fucked too [|};-}";
          cout << "\n\n_________________________________________________";

          Sleep(4000);
          system("cls");
          string c;
          cout << "\n--------------------------------------------------------" << endl;
          cout << "\n\t  Want to play it again (Y/n)?" << endl;
          cout << "\n--------------------------------------------------------" << endl;
          getline(cin, c);
          if (c != "y" && c != "Y" && c.length() != 0)
               break;
     }
}

// avoid ctrl + c to quit this program execution while running
void signal_callback_handler(int signum)
{
     signal(SIGINT, signal_callback_handler);
}

int main(int argc, char **argv)
{
     signal(SIGINT, signal_callback_handler);     
     Hack_Sleep_Func();
     return 0;
}