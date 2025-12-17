#ifndef CONTROL_PANEL_HPP
#define CONTROL_PANEL_HPP

// Define paths for all images
#define IMAGE_1 QPATHTOF(data\backgrounds\image1_co.paa)
#define IMAGE_2 QPATHTOF(data\backgrounds\image2_co.paa)
#define IMAGE_3 QPATHTOF(data\backgrounds\image3_co.paa)
#define IMAGE_4 QPATHTOF(data\backgrounds\image4_co.paa)
#define IMAGE_5 QPATHTOF(data\backgrounds\image5_co.paa)
#define IMAGE_6 QPATHTOF(data\backgrounds\image6_co.paa)
#define IMAGE_7 QPATHTOF(data\backgrounds\image7_co.paa)
#define IMAGE_8 QPATHTOF(data\backgrounds\image8_co.paa)
#define IMAGE_9 QPATHTOF(data\backgrounds\image9_co.paa)
#define IMAGE_10 QPATHTOF(data\backgrounds\image10_co.paa)
#define IMAGE_11 QPATHTOF(data\backgrounds\image11_co.paa)
#define BLAZE QPATHTOF(data\backgrounds\blaze_co.paa)
/*
These defines listed below are used to generate a random picture from the list above, if any new are added make sure to update it!

RANDOM_IMAGE_PATH_1
RANDOM_IMAGE_PATH_2
RANDOM_IMAGE_PATH_3
RANDOM_IMAGE_PATH_4
RANDOM_IMAGE_PATH_5
RANDOM_IMAGE_PATH_6
*/

// Define array of all images
#define IMAGE_ARRAY [IMAGE_1, IMAGE_2, IMAGE_3, IMAGE_4, IMAGE_5, IMAGE_5, IMAGE_6, IMAGE_7, IMAGE_8, IMAGE_9, IMAGE_10, IMAGE_11, BLAZE]

// ------------------------------------------------ Do not touch anything below!! --------------------------------------------------------

// Defines random images. No need touch.

#define RANDOM_IMAGE_INDEX_1 floor(random count IMAGE_ARRAY)
#define RANDOM_IMAGE_INDEX_2 floor(random count IMAGE_ARRAY)


#define RANDOM_IMAGE_PATH_1 __EVAL(IMAGE_ARRAY select RANDOM_IMAGE_INDEX_1)
#define RANDOM_IMAGE_PATH_2 __EVAL(IMAGE_ARRAY select RANDOM_IMAGE_INDEX_2)

// Defines dev mod by uncommeting these below and commeting the ones above.

/*
#define RANDOM_IMAGE_PATH_1 QPATHTOF(data\dev\dev1_co.paa)
#define RANDOM_IMAGE_PATH_2 QPATHTOF(data\dev\dev2_co.paa)
#define RANDOM_IMAGE_PATH_3 QPATHTOF(data\dev\dev3_co.paa)
#define RANDOM_IMAGE_PATH_4 QPATHTOF(data\dev\dev4_co.paa)
#define RANDOM_IMAGE_PATH_5 QPATHTOF(data\dev\dev5_co.paa)
#define RANDOM_IMAGE_PATH_6 QPATHTOF(data\dev\dev6_co.paa)
*/

#endif // CONTROL_PANEL_HPP
