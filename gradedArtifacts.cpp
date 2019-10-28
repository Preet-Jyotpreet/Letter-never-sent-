#include<iostream>
#include<sstream>
#include"gradedArtifacts.hpp"

int* gradedArtifacts(const unsigned int &SIZE,std::string points) {

        int *arr = new int [SIZE];

        std::stringstream ss(points);

        for (unsigned int i = 0; i < SIZE; i++){
            std::string temp;
            std::getline(ss,temp,' ');
            arr[i]=stoi(temp);

        }

        return arr;

}
