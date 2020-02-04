# Opencv_private
Opencv_private


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

## 1.1 图片的读取

    image = imread("timg.jpg");                                         // Read the file

## 1.2 图片的腐蚀

	getStructuringElement()可以生成形态学操作中用到的核
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	erode(image, dstImage, element);
	
	