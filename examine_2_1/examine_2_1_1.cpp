#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    Mat img = imread("O:\\ProjectFile\\RM-packages\\img\\RM.png");    // 这边修改成自己的图片路径，注意双斜杠

    if(img.empty())
    {
        cout << "can't read this image!" << endl;
        return 0;
    }

    imshow("image", img);

    Mat gray_img;
    cvtColor(img, gray_img, COLOR_BGR2GRAY);

    imshow("GRAY image", gray_img);

    Mat gaussin_img;

    GaussianBlur(gray_img, gaussin_img, Size(5, 5), 10, 20);

   imshow("gaussin_img", gaussin_img);

   Mat bin_img;

   threshold(gaussin_img, bin_img, 100,255, cv::THRESH_TRUNC);

   imshow("bin_img", bin_img);


    waitKey(0);

    return 0;
}

