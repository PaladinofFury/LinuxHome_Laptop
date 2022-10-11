//header file for PPMImage

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 'In-Class 1', Group 5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
/*
Each of the Following must have: (return value, method name, input parameters) and include a comment for 
each functions about what conditions must be true for the function to successfully execute (pre-conditions)  
and what conditions will always be true after the function successfully executes (post-conditions). 
*/

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Person 1 : Anne ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Additive Assignment (+=)
/*
+= PPMLine -- Performs the + PPMLine functionality, but instead of returning a PPMImage, it modifies the existing image.
*/
// Purpose: appends a PPMLine object to the end of an existing image
// Pre-condition: the original image x1 > 0, the PPMLine object x2 = x1
// Post-condition: the modified existing image whose bottom part is overlayed by the PPM object: x = x1 = x2
// throw exception if x1 = 0 or x1 # x2;
// return value: PPMImage
// method name: modifiedImageWithPPMLine
// input parameters: PPMImage originalImage, PPMLine lineObject

// addPPMLine
/*
appends a PPMLine object to the end of an existing image. If the existing image has an X pixel value of 0,
thrown an exception. If the PPMLine object does not have the same X value as the existing image, throw and exception.
*/
// Purpose: appends a PPMLine object to the end of an existing image
// Pre-condition: the original image x1 > 0, the PPMLine object x2 = x1
// Post-condition: an image of the original image with the PPMLine object at the end: x = x1 = x2
// throw exception if x1 = 0 or x1 # x2;
// return value: PPMImage
// method name: addPPMLineToImage
// input parameters: PPMImage originalImage, PPMLine lineObject

// addPPMImage
/*
Overlays the two images such that the resulting image has the x dimension of the image with the greater x
dimension and the y dimension of the greater y dimension. If the images have valid pixels, add the values
together and modulo divide by the Maximum color size. If one of the images doesn't have a pixel for a
location, just use the value that does exist.
*/
// Purpose: overlays the two images
// Pre-condition: the two images x1, x2, y1, y2 > 0; (x1 + x2) % 255 + 1
// Post-condition: a new image with x = Max(x1, x2), y = Max(y1, y2)
// RGB values r = (r1 + r2) % 255 +1;  g = (g1 + g2) % 255 +1;  b = (b1 + b2) % 255 +1; default value (0, 0, 0)
// return value: PPMImage
// method name: overlayedImages
// input parameters: PPMImage image1, PPMImage image2

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Person 2 : Michael ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  
// subtractPPMImage
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Removes the PPMImage from the existing image such that resulting image has the x dimension of the image 
with the greater x dimension and the y dimension of the greater y dimension.
*/
//return value:     void
//method name:      subtractPPMImage            //may just be overloaded '-' operator reading a PPMImage on left and right sides of operator
//input parameters: subtractPPMImage(PPMImage existingImage, PPMImage removedImage)
//Preconditions:    original and subtracting PPMImages have valid pixels, neither have x or y of zero.
//Postconditions:   The original PPMImage has been modified by subtracting the given PPMImage, it also 
//                  now has the greater x and y dimensions from between them. Otherwise an exception will be thrown for invalid input.

// negatePPMImage
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Returns an image so that every pixel has the value of: Maximum color size - the original pixel value [inverting the image/creating a negative]
(note that this is the unary operator -, not the subtraction operator)
*/
//return value:     PPMImage
//method name:      negatePPMImage              //may just be overloaded '-' operator reading a PPMImage on right side of operator
//input parameters: negatePPMImage(PPMImage existingImage)
//Preconditions:    existingImage must have x and y dimensions greater than 0
//Postconditions:   each existingImage pixel color value is changed to 255 - originalValue


// Input Stream Operator (<<)
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Purpose
Outputs the raw data (this needs to work for both file output and cout)
-- Reads the data from either a file stream or cin
example)    std::cout << img7 << std::endl;
*/
//return value:     string/void                 //I am unsure if an overloaded << operator returns anything, 
                                                //but if it does or we use a method without overloading the operator, then it will be a string
//method name:      oStreamPPMImage             //may just be an overloaded '<<' operator, sending data from right side to the left side of operator
//input parameters: oStreamPPMImage(ostream &cout, PPMImage imageData)
//Preconditions:    valid ostream object and valid PPMImage object are passed to function, no changes are made to either
//Postconditions:   ostream object has PPMImage raw data, likely as a string, and can use it to output to somewhere else (like a file)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Person 3 : Milly ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// bool operator == (PPMImage const& rhs) const
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Returns true when the images have the same x size, y size, color value, and the pixels. Returns false otherwise
//return value:     boolean
//method name:      ==            
//input parameters: PPMImage const& rhs
//Preconditions:    none
//Postconditions:   none, the original image has no change

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// bool operator != (PPMImage const& rhs) const
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Returns true when the images have different x size, y size, color value, or the pixels. Returns false otherwise
//return value:     boolean
//method name:      !=            
//input parameters: PPMImage const& rhs
//Preconditions:    none
//Postconditions:   none, the original image has no change


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// friend ostream& operator << (ostream& os, const PPMImage& img);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Using the correct format, output the image to the output stream
//return value:     ostream&
//method name:      <<          
//input parameters: ostream& os, const PPMImage& img
//Preconditions:    valid ostream object and valid PPMImage object are passed to function, no changes are made to either
//Postconditions:   ostream object has PPMImage raw data, likely as a string, and can use it to output to somewhere else (like a file)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Person 4 : Nimai ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
// Constructors
/*
Return Value : A PPMImage object
Method Name : PPMImage, PPMImage(string), PPMImage(const PPImage &old_obj);
Input Parameters : a string file name to create a PPMImage from an existing PPM file, 
or an existing PPMImage to be copied into a new PPImage
Pre - Conditions : If using file name constructor, given string name must correlate to a valid PPM file, 
if using copy constructor, given PPImage must be a valid already defined PPImage
(Throw respective exceptions if either constructor fails)
Post - Conditions : PPMImage is created
*/

//Drawline
/*
Return Value : Adds a line from(startX, startY) to(endX, endY) with the color of color to the PPMImage
Method Name : void DrawLine(int startX, int startY, int endX, int endY, RGBValue color)
Input Parameters : int startX, int startY, int endX, int endY, RGBValue color
Pre - Conditions : Input points must be inside the current image
(Throw exception if points are not inside boundary)
Post - Conditions : Successfully draws line to the PPImage
*/

//LoadFile

/*
Return Value : Loads the PPM file into the PPMImage with the name given to the method
Method Name : void LoadFile(string)
Input Parameters : string file name to be loaded into the PPMImage
Pre - Conditions : String name must correlate to a valid PPM file
(Throw exception if file load fails)
Post - Conditions : PPM File is successfully loaded to the PPImage
*/
//Other operations not included in 'In-Class 1'
//Destructor