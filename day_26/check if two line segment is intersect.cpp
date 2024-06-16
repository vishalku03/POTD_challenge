class Solution {
  public:
    double func(int p[], int q[], int r[]){
        long long x_1=p[0];
        long long y_1=p[1];
        long long x_2=q[0];
        long long y_2=q[1];
        long long x=r[0];
        long long y=r[1];
        return ((x_2-x_1)*y-(y_2-y_1)*x-(x_2*y_1-y_2*x_1))/(abs((x_2-x_1)*y-(y_2-y_1)*x-(x_2*y_1-y_2*x_1))+1.0);
    }
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        if(func(p1,p2,q1)*func(p1,p2,q2)>=0 and func(q1,p2,p1)*func(q1,p2,q2)>=0 and func(p1,q1,p2)*func(p1,q1,q2)<=0) return "true";
        else return "false";
    }
};

 

 // gfg