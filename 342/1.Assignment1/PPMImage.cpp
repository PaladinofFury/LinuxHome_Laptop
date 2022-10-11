//Implementation file for PPMImage
#include "PPMImage.h"
#include<iostream>
#include<fstream>
//#include "RGBValue.h"
#include "PPMImage.h"
//#include "PPMLine.h"
#include <vector>
#include <string>

// Additive Assignment (+=)
/*
+= PPMLine -- Performs the + PPMLine functionality, but instead of returning a PPMImage, it modifies the existing image.
*/

// addPPMLine
/*
appends a PPMLine object to the end of an existing image. If the existing image has an X pixel value of 0,
thrown an exception. If the PPMLine object does not have the same X value as the existing image, throw and exception.
*/

// addPPMImage
/*
Overlays the two images such that the resulting image has the x dimension of the image with the greater x
dimension and the y dimension of the greater y dimension. If the images have valid pixels, add the values
together and modulo divide by the Maximum color size. If one of the images doesn't have a pixel for a
location, just use the value that does exist.
*/

// subtractPPMImage
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Removes the PPMImage from the existing image such that resulting image has the x dimension of the image 
with the greater x dimension and the y dimension of the greater y dimension.
*/

// negatePPMImage
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Returns an image so that every pixel has the value of: Maximum color size - the original pixel value [inverting the image/creating a negative]
(note that this is the unary operator -, not the subtraction operator)
*/

// Input Stream Operator (<<)
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Outputs the raw data (this needs to work for both file output and cout)
-- Reads the data from either a file stream or cin
example)    std::cout << img7 << std::endl;
*/

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// bool operator == (PPMImage const& rhs) const
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Returns true when the images have the same x size, y size, color value, and the pixels. Returns false otherwise

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// bool operator != (PPMImage const& rhs) const
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Returns true when the images have different x size, y size, color value, or the pixels. Returns false otherwise

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// friend ostream& operator << (ostream& os, const PPMImage& img);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Using the correct format, output the image to the output stream
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Constructors
//Method Name : PPMImage, PPMImage(string), PPMImage(const PPImage &old_obj);

//Drawline
/*
Return Value : Adds a line from(startX, startY) to(endX, endY) with the color of color to the PPMImage
*/
//LoadFile

/*
Return Value : Loads the PPM file into the PPMImage with the name given to the method
*/

//Other operations not included in 'In-Class 1'
//Destructor