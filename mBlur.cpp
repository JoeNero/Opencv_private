/*
������	:	XTT
����	:	OpenCV
            ͼ��ģ��
ʱ��	:	2020/01/08
*/
#define _CRTSECURE_NO_WARINGS
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

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
    imshow("ԭͼwindow", image);     

    //Size �ߴ���
    blur(image, dstImage,Size(7,7));

    imshow("ģ����window", dstImage);

    waitKey(0);
    return 0;
}
