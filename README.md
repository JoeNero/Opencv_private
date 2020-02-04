# Opencv_private

		Mat类可以分为两个部分：矩阵头和指向像素数据的矩阵指针。

		argc和argv参数在用命令行编译程序时有用。main( int argc, char* argv[], char **env ) 中 
        第一个参数，int型的argc，为整型，用来统计程序运行时发送给main函数的命令行参数的个数，在VS中默认值为1。 
        第二个参数，char*型的argv[]，为字符串数组，用来存放指向的字符串参数的指针数组，每一个元素指向一个参数。各成员含义如下： 
        argv[0]指向程序运行的全路径名 
        argv[1]指向在DOS命令行中执行程序名后的第一个字符串 
        argv[2]指向执行程序名后的第二个字符串 
        argv[3]指向执行程序名后的第三个字符串 
        argv[argc]为NULL 
        第三个参数，char**型的env，为字符串数组。env[]的每一个元素都包含ENVVAR=value形式的字符串，其中ENVVAR为环境变量，value为其对应的值。平时使用到的比较少。
		
# 1图片

## 1.1 加载修改图像

	mImage.cpp
	
	加载图像 cv::imread
	修改图像 cv::cvtColor
	保存图像 cv::imwrite
	
    image = imread("timg.jpg");                                       
	imwrite("保存的图.jpg",img);
	
## 1.2 图片的腐蚀

	mErode.cpp
	
	//getStructuringElement()可以生成形态学操作中用到的核
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	erode(image, dstImage, element);
	
## 1.3 灰度化

	CV_BGR2GRAY
	CV_THRESH_BINARY

	使用上列宏需要加入以下头文件
	#include <opencv2\imgproc\imgproc.hpp>
	#include "opencv2/imgproc/types_c.h"
		
	cvtColor(img, imgGray, CV_BGR2GRAY);

## 1.4 图像模糊

	mBlur.cpp
	blur(image, dstImage,Size(7,7));

## 1.5 边缘检测
	
	Canny算子边缘检测
	mCanny.cpp
	Canny(imgGray,imgEdge,3,9,3);
	
	