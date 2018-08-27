#include <stdio.h>
#include <stdlib.h>
/*浮点性型数据在计算机中存储是有误差的，所以银行存款不能使用浮点型数据类型
 *将存款转化成以分为单位的整形型据
 *
 */
int main()
{
    float a = 3.1; /* 单精度，4个字节，32位 */
    double b = 3.2; /*双精度 ，8字节，64位*/
    long double c = 3.3; /*长双精度， 16字节，128位*/
    printf("a=%f,b=%f,c=%Lf\n", a, b, c); /*长双精度使用输出格式编译时会出现警告，警告信息如下，长双精度的输出格式为%Lf*/
    /*
    * warning: format ‘%f’ expects argument of type ‘double’, but argument 4 has type ‘long double’
    */
    return 0;
}
