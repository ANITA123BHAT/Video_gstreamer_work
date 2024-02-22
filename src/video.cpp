#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>

#include<iostream>
using namespace cv;
using namespace std;
int main(){

	string path= "/home/ee212766/eclipse-workspace/opencv_chapter1/output14.mp4";
    VideoCapture cap(path);
	Mat img;
		while(true){
			cap.read(img);
			imshow("Image", img);
			waitKey(20);
		}
	return 0;
}
