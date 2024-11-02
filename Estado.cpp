#pragma once
#include "pch.h"

using namespace System;

public ref class Estado {
private:
	int id; // 1 = Atendido; 2 = Resuelto; 3 = Reabierto; 4 = Finalizado
	String^ nombre;
public:
	// Contructores
	Estado(){}

	Estado(int id, String^ nombre) {
		this->id = id;
		this->nombre = nombre;
	}

	// Getters
	int getId() { return this->id; }

	String^ getNombre() { return this->nombre; }

	// Setters
	void setId(int id) { this->id = id; }

	void setNombre(String^ nombre) { this->nombre = nombre; }
};