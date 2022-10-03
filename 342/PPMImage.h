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
//Comparison Operations (==, 
//                          !=)
//Output Stream Operator (>>)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Person 4 : Nimai ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
//Constructor
//Drawline
//LoadFile

//Other operations not included in 'In-Class 1'
//Destructor