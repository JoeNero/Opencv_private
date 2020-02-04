/*
������	:	XTT
����	:	OpenCV
            ͼ��ʴ
ʱ��	:	2020/01/08
*/
#define _CRTSECURE_NO_WARINGS
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;
using namespace std;

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc,char** argv)
{
    Mat image;          //ԭͼ��
    Mat dstImage;       //��ʴ���ͼ��
    image = imread("timg.jpg");                                         

    if (image.empty())                                                 
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }
 //   namedWindow("Display window", WINDOW_AUTOSIZE);                    
    imshow("Display1 window", image);     

    //getStructuringElement()����������̬ѧ�������õ��ĺ�
    Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));

    erode(image, dstImage, element);
                                                            
    imshow("Display2 window", dstImage);
    waitKey(0);
    return 0;
}
