#include <Eigen/Dense>
#include <iostream>

int main()
{
    Eigen::Matrix4d m = Eigen::Matrix4d::Random();
    m <<
      0.999303,   0.0145721,  -0.0343709, -0.00753874,
     -0.0145243,    0.999893,  0.00164037,     0.52384,
      0.0343912, -0.00114001,    0.999408,    -5.68314,
          0,           0,           0,           1;
    std::cout << m << std::endl;
    std::cout << m.inverse() << std::endl;
    std::cout << m * m.inverse() << std::endl;
    return 0;
}

