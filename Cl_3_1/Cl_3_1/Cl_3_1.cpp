﻿#include "Application_Class.h"
int main() {
	Application_Class Application_Obj(nullptr);
	Application_Obj.Build_Tree();
	Application_Obj.Input_State();
	return Application_Obj.Exec_App();
}