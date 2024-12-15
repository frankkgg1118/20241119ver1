﻿#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(const string& courseId, const string& courseName, const string& courseDescription) : courseId(courseId), courseName(courseName), courseDescription(courseDescription)
{
}

Course::Course()
{
}

string Course::getCourseId() const
{
	return courseId;
}

string Course::getCourseName() const
{
	return courseName;
}

string Course::getCourseDescription() const
{
	return courseDescription;
}

void Course::setCourseId(const string& courseId)
{
	this->courseId = courseId;
}

void Course::setCourseName(const string& courseName)
{
	this->courseName = courseName;
}

void Course::setCourseDescription(const string& courseDescription)
{
	this->courseDescription = courseDescription;
}

void Course::display() const
{
	cout << "½Òµ{¥N½X: " << courseId << endl;
	cout << "½Òµ{¦WºÙ: " << courseName << endl;
	cout << "½Òµ{´y­z: " << courseDescription << endl;
}
