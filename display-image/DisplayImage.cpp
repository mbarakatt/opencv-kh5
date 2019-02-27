#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;
    image = imread(argv[1], 1);

    if (!image.data)
    {
        printf("No image data \n");
        return -1;
    }

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);

	cout << "Tapper q pour quitter" << endl;
	// source (réponse de louis) : https://stackoverflow.com/questions/15028244/opencv-restrict-cvwaitkey-to-only-one-wait-for-one-specific-key
	while((cv::waitKey() & 0xEFFFFF) != (int)'q');
    return 0;
}

