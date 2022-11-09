//
// Created by cdolinta on 11/9/2022.
//
#include <stdio.h>
void rectangleArea(float width, float height){
    float perimeter = width + height * 2;
    float area = width * height;
    printf(" Square width: %f and height: %f \n Perimeter : %.2f \n Area: %.2f", width, height, perimeter, area);
}