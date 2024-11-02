#pragma once

#include "pch.h";

using namespace System;

public ref class Rol {
private:
	int id;
	String^ rol;

public:
	//Contructores
	Rol(int id, String^ rol) {
		this->id = id;
		this->rol = rol;
	}

	Rol(String^ rol) { this->rol = rol; }

	// Getters
	String^ getRol() { return this->rol; }

	int getId() { return this->id; }

	// Setters
	void setRol(String^ rol) { this->rol = rol; }

	void setId(int id) { this->id = id; }
};