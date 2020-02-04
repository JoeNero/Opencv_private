/*
创建者	:	XTT
功能	:	OpenCV
            图片读取
时间	:	2020/01/08
*/
#define _CRTSECURE_NO_WARINGS
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

int main()
{
    Mat image;
    image = imread("timg.jpg");                                         // Read the file

    if (image.empty())                                                  // Check for invalid input   
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }
    namedWindow("Display window", WINDOW_AUTOSIZE);                     // Create a window for display.
    imshow("Display window", image);                                    // Show our image inside it.

	imwrite("保存的图.jpg",img);
    waitKey(0);                                                         // Wait for a keystroke in the window

    std::cout << "Hello World!\n";
}
