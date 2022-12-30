//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <imgproc.hpp>
//#include <opencv2/highgui.hpp>

//using namespace cv;
//using namespace std;


//int main()
//{
//    Mat img = imread("O:\\ProjectFile\\RM-packages\\img\\RM.png");    // 这边修改成自己的图片路径，注意双斜杠

//    if(img.empty())
//    {
//        cout << "can't read this image!" << endl;
//        return 0;
//    }

//  namedWindow("hsv 调节", WINDOW_AUTOSIZE);


//  int value = 100;
//  cv::createTrackbar("h-max","hsv调节",&value,600,0,0);
//  cv::createTrackbar("h-min","hsv调节",&value,600,0,0);
//  cv::createTrackbar("s-max","hsv调节",&value,600,0,0);
//  cv::createTrackbar("s-min","hsv调节",&value,600,0,0);
//  cv::createTrackbar("v-max","hsv调节",&value,600,0,0);
//  cv::createTrackbar("v-min","hsv调节",&value,600,0,0);

//  imshow("image", img);

//    waitKey(0);

//    return 0;
//}

