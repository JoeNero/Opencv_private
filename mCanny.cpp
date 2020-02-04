/*
创建者	:	XTT
功能	:	OpenCV
            Canny算子边缘检测
时间	:	2020/01/08
*/
#define _CRTSECURE_NO_WARINGS
#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include "opencv2/imgproc/types_c.h"

using namespace std;
using namespace cv;

int main()
{
	Mat img, imgGray, imgEdge;
	img = imread("timg.jpg");
	if (!img.data) 
	{
		cout << "Please input image path" << endl;
		return 0;
	}
	imshow("原图", img);

	cvtColor(img, imgGray, CV_BGR2GRAY);
	imshow("灰度图", imgGray);

	Canny(imgGray, imgEdge, 3, 9, 3);
	imshow("Canny", imgEdge);

	waitKey();

	return 0;
}