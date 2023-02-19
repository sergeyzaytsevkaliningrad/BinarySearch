//
//  BinarySearch.hpp
//  BinarySearchTree
//
//  Created by Сергей Зайцев on 01.02.2023.
//

#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <stdio.h>

#include <bootparams.h>
#include <iostream>
#include <string>
#include <math.h>
class BSTNode{
public:
    int Key;
    BSTNode * Left;
    BSTNode * Right;
    BSTNode * Parent;
    int Height;
};

class BST{
private:
    BSTNode * root;

protected:
    //for work with
    BSTNode * Insert(BSTNode * node, int key);
    void PrintTreeInOrder(BSTNode * node);
    BSTNode * Search(BSTNode * node, int key);
    int FindMin(BSTNode * node);
    int FindMax(BSTNode * node);
    int Successor(BSTNode * node);
    int Predecessor(BSTNode * node);
    BSTNode * Remove(BSTNode * node, int v);

public:
    BST();

    void Insert(int key);
    void PrintTreeInOrder();
    bool Search(int key);
    int FindMin();
    int FindMax();
    int Successor(int key);
    int Predecessor(int key);
    void Remove(int v);
};


struct Cell {
    // {{left_x, right_x}, {upper_y, lower_y}}
    float  x_bounds;
    float  y_bounds;
    // {{upper_left, upper_right}, {lower_left, lower_right}}
    float upper_values;
    float lower_values;
    
//    float z_values;
};

class VerticeIndexes {
 public:
  // FIXME
  using Point3D = double;
  using VerticeIndex = size_t;
  VerticeIndex AddVertice(Point3D point);
  Point3D GetCoords(VerticeIndex index);
  // needed for heatmap interpolation
  std::array<VerticeIndex, 4> GetConvexHull(Point3D point);
 private:
//  std::vector<Point3D> coords_;
  // add search tree
};



#endif /* BinarySearch_hpp */

