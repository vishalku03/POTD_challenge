int countNumberswith4(int n)
{
     int count = 0;
     for (int i = 1; i <= n; i++)
     {
          int unit_place = i % 10;
          int tens_place = (i / 10) % 10;
          int hund_place = (i / 100) % 10;
          int tho_place = (i / 1000) % 10;
          int tentho_place = (i / 10000) % 10;
          int lakh_place = (i / 100000) % 10;
          if (lakh_place == 4 || tentho_place == 4 || tho_place == 4 || hund_place == 4 || tens_place == 4 || unit_place == 4)
          {
               count++;
          }
     }
     return count;
}
// gfg