//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace v� hi?u h�a vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;

int main() {

	//??c h�nh ?nh
	Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\CutPictureOpenCV\\ptit.jpg", 1);

	Mat crop = image(Range(80, 280), Range(150, 330));
	// Hi?n th? ?nh ?� c?t
	imshow("Hinh anh goc", image);
	imshow("Cropped Image", crop);


	waitKey(0);

	//ph� h?y t?t c? c�c c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
