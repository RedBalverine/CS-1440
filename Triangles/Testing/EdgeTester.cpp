//
// Created by Stephen Clyde on 2/3/17.
//

#include "EdgeTester.h"

#include <iostream>
#include <cmath>
#include "../Point.h"
#include "../Edge.h"

void EdgeTester::testEdge01()
{
    std::cout << "Execute EdgeTester::testEdge01" << std::endl;

    Point p0(0,0,0);
    Point p1(1,0,0);

    // Create and test a edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (e.getLength()!=1)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 1)"
                  << std::endl;
        return;
    }

    if (e.getSlopeX()!=INFINITY)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting INFINITY)"
                  << std::endl;
        return;
    }

    if (e.getSlopeY()!=0)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0)"
                  << std::endl;
        return;
    }

    if (e.getSlopeZ()!=0)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 0)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testEdge02()
{
    std::cout << "Execute EdgeTester::testEdge02" << std::endl;

    Point p0(1,0,0);
    Point p1(3,4,5);

    // Create and test a edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (fabs(e.getLength() - 6.708203932) > 0.001)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 6.708203932)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeX() - 0.312347524) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting 0.312347524)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeY() - 0.742781353) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0.742781353)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeZ() - 1.118033989) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 1.118033989)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testParallelEdges()
{
    std::cout << "Execute EdgeTester::testParallelEdges" << std::endl;

    Point p0(1,3,4);
    Point p1(3,4,5);
    Point p2(5,5,6);
    Point p3(5,9,6);
    Edge e(&p0,&p1);
    Edge e1(&p1,&p2);
    Edge e2(&p0, &p3);

    if(!e.isParallelTo(e1))
    {
        std::cout << "e and e1 are Reading Not Parallel: Failure to read correctly -- expected answer: Parallel" << std::endl;
    }


    // TODO: Writing a representative set of test cases for edges that are parallel with other
}

void EdgeTester::testNonParallelEdges()
{
    std::cout << "Execute EdgeTester::testNonParallelEdges" << std::endl;

    Point p0(1,3,4);
    Point p1(3,4,5);
    Point p2(5,5,6);
    Point p3(5,9,6);
    Edge e(&p0,&p1);
    Edge e1(&p1,&p2);
    Edge e2(&p0, &p3);

    if (e.isParallelTo(e2))
    {
        std::cout << "Reading Parallel: Failure to read correctly -- expected answer: Not Parallel" << std::endl;
    }

    if (e1.isParallelTo(e2))
    {
        std::cout << "Reading Parallel: Failure to read correctly -- expected answer: Not Parallel" << std::endl;
    }

    // TODO: Writing a representative set of test cases for edges that are not parallel with other
}

void EdgeTester::testNonLengthEdges()
{
    std::cout << "Execute EdgeTester::testNonLengthEdges" << std::endl;
    Point p0(1,3,4);
    Point p1(1,3,4);
    Point p2(1.00000001,3,4);
    Point p3(5,9,6);
    Edge e(&p0,&p1);
    Edge e1(&p1,&p2);
    Edge e2(&p0, &p3);

    if (!e.getLength() == 0)
    {
        std::cout << "The reading is incorrect. Expected length is 0." << std::endl;
    }

    if (!e1.getLength() == 0)
    {
        std::cout << "The reading is incorrect. Expected length is 0." << std::endl;
    }


    // TODO: Writing a representative set of test cases for edges have a length of zero or approximately zero
}

void EdgeTester::testBadEdges()
{
    std::cout << "Execute EdgeTester::testBadEdges" << std::endl;

    Point p0(1,3,4);
    Point p1(1,3,4);
    Point p2(1.00000001,3,4);
    Point p3(5,9,6);
    Edge e(&p0,&p1);
    Edge e1(&p1,&p2);
    Edge e2(&p0, &p3);

    if(!e.isValid())
    {
        std::cout << "This edge was not correctly formed" << std::endl;
        return;
    }

    if(!e1.isValid())
    {
        std::cout << "This edge was not correctly formed" << std::endl;
        return;
    }

    if(!e2.isValid())
    {
        std::cout << "This edge was not correctly formed" << std::endl;
        return;
    }

    // TODO: Writing a representative set of test cases for edges not formed correctly
}
