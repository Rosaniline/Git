//
//  main.cpp
//  Git
//
//  Created by Rosani Lin on 13/4/2.
//  Copyright (c) 2013年 Rosani Lin. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[])
{

//    std::cout<<"this is a test.";
    
    cv::Mat temp = cv::imread("/Users/xup6qup3/Dropbox/Photos/cock.jpg");
    cv::imshow("temp", temp);
    cv::waitKey(0);
    
    return 0;
}

