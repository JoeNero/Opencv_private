/*
创建者	:	XTT
功能	:	OpenCV
            图像模糊
时间	:	2020/01/08
*/
#define _CRTSECURE_NO_WARINGS
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc,char** argv)
{
    Mat image;          //原图像
    Mat dstImage;       //腐蚀后的图像
    image = imread("timg.jpg");                                         

    if (image.empty())                                                 
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }
 //   namedWindow("Display window", WINDOW_AUTOSIZE);                    
    imshow("原图window", image);     

    //Size 尺寸类
    blur(image, dstImage,Size(7,7));

    imshow("模糊后window", dstImage);

    waitKey(0);
    return 0;
}
