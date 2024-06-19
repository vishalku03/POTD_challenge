class Solution
{
public:
     double maxVolume(double perimeter, double area)
     {
          double l = (perimeter - sqrt(pow(perimeter, 2) - (24 * area))) / 12;
          double h = ((perimeter / 4) - 2 * l);
          return l * l * h;
     }
}

// gfg