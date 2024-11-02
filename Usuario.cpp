#pragma once

#include "pch.h";
#include "Rol.cpp"

using namespace System;

public ref class Usuario {
private:
	int id;
	String^ password;
	Rol^ rol;
	bool bloqueado;
	int fallas = -1;
	int marcas = -1;

public:
	//Contructores
	Usuario(int id, Rol^ rol, bool bloqueado) {
		this->id = id;
		this->rol = rol;
		this->bloqueado = bloqueado;
	}

	Usuario(Rol^ rol, bool bloqueado) {
		this->rol = rol;
		this->bloqueado = bloqueado;
	}

	Usuario() {}

	// Getters
	int getId() { return this->id; }

	Rol^ getRol() { return this->rol; }

	String^ getPassword() { return this->password; }

	bool getBloqueado() { return this->bloqueado; }

	int getFallas() { return this->fallas; }

	int getMarcas() { return this->marcas; }

	// Setters
	void setId(int id) { this->id = id; }

	void setRol(Rol^ rol) { this->rol = rol; }

	void setPassword(String^ password) { this->password = password; }

	void setBloqueado(bool bloqueado) { this->bloqueado = bloqueado; }

	void setFallas(int fallas) { this->fallas = fallas; }

	void setMarcas(int marcas) { this->marcas = marcas; }
};