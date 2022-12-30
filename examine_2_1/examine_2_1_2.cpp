#include <iostream>
#include <opencv2/opencv.hpp>
#include <windows.h>
#include <time.h>
#include <string>
using namespace std;
using namespace cv;

int width = 640;
int heigth = 480;
cv::VideoCapture cap;
int main()
{

    cap.open("O:\\ProjectFile\\RM-packages\\video\\preview.mp4");
    cap.set(cv::CAP_PROP_FRAME_WIDTH, width);    //设置宽度
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, heigth);  //设置长度
    cap.set(cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M', 'J', 'P', 'G'));//视频流格式
    cap.set(cv::CAP_PROP_FPS, 30);//帧率 帧/秒

    if (!cap.isOpened())
    {
        cout << "打开失败" << endl;
        return 0;
    }
    cv::Mat frame;
    cv::namedWindow("frame");//创建显示窗口
//************************************************************************
    //设置字体格式
    int font_face = cv::FONT_HERSHEY_COMPLEX;
    double font_scale = 1;
    int thickness = 2;
    int baseline;
    cv::Point origin;
    origin.x = 10;
    origin.y = 450;

//************************************************************************
    while (1)
    {


        cap >> frame;//bool judge=cap.read(frame);
        if (frame.empty()) break;
        int ftp = cap.get(CAP_PROP_FPS);
        string strftp = to_string(ftp);
        cv::putText(frame, strftp.c_str(), origin, font_face, font_scale, cv::Scalar(0, 255, 255), thickness, 8, 0);
        cv::imshow("frame", frame);
        if (27 == cv::waitKey(33)) break;


    }

    cv::destroyWindow("frame");
    cap.release();

    return 0;
}
