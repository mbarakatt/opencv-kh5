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

    namedWindow("Display Image", WINDOW_FREERATIO);
    imshow("Display Image", image);

	// source (réponse de louis) : https://stackoverflow.com/questions/15028244/opencv-restrict-cvwaitkey-to-only-one-wait-for-one-specific-key
	while((cv::waitKey() & 0xEFFFFF) != (int)'q');
    return 0;
}

/* #include <iostream> */
/* //Ce fichier d'en-tête contient les éléments et structures de base */
/* #include <opencv2/core/core.hpp> */
/* // Ce fichier d'en-tête contient les éléments nécessaires pour l'affichage à l'écran */
/* #include <opencv2/highgui/highgui.hpp> */

/* using namespace cv;  // L'espace de nom pour accéder aux classes */

/* int main() */
/* { */
/* // La classe Mat est la classe principale qui représente une image */

/*    	Mat ImgSource; */

/*    	return 0; */

/* } */


