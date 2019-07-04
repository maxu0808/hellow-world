#include <opencv.hpp>
using namespace cv;
int main()
{
	Mat srcImage;
	srcImage = imread("d://1.png");
	imshow("ÏÔÊ¾Í¼Ïñ", srcImage);
	waitKey();
	return 0;
}
