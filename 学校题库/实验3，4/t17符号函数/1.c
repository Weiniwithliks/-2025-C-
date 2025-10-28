/*
* ÔÚÎó²îÈİÏŞeps·¶Î§ÄÚÅĞ¶ÏxµÄ·ûºÅ¡£
*/
int sgn(double x, double eps)
{
    if(x>=-eps&&x<=eps)return 0;
    else if(x>eps)return 1;
    else return -1;
}