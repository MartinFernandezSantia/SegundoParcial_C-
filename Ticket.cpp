#pragma once
#include "pch.h"

#include "Usuario.cpp"
#include "Estado.cpp"

using namespace System;

public ref class Ticket {
private:
	int id;
	String^ titulo;
	String^ descripcion;
	Usuario^ creador;
	Estado^ estado = nullptr; // No atendido
	Usuario^ tecnico = nullptr; // Tecnico no asignado
	
public:
	// Contructores
	Ticket(){}

	Ticket(int id, String^ titulo, String^ descripcion, Usuario^ creador, Estado^ estado, Usuario^ tecnico) {
		this->id = id;
		this->titulo = titulo;
		this->descripcion = descripcion;
		this->creador = creador;
		this->estado = estado;
		this->tecnico = tecnico;
	}

	Ticket(String^ titulo, String^ descripcion, Usuario^ creador, Estado^ estado) {
		this->id = id;
		this->titulo = titulo;
		this->descripcion = descripcion;
		this->creador = creador;
		this->estado = estado;
	}

	Ticket(String^ titulo, String^ descripcion, Usuario^ creador) {
		this->titulo = titulo;
		this->descripcion = descripcion;
		this->creador = creador;
	}

	// Getters
	int getId() { return this->id; }

	String^ getTitulo() { return this->titulo; }

	String^ getDescripcion() { return this->descripcion; }

	Usuario^ getCreador() { return this->creador; }

	Estado^ getEstado() { return this->estado; }

	Usuario^ getTecnico() { return this->tecnico; }

	// Setters
	void setId(int id) { this->id = id; }

	void setTitulo(String^ titulo) { this->titulo = titulo; }

	void setDescripcion(String^ descripcion) { this->descripcion = descripcion; }

	void setCreador(Usuario^ creador) { this->creador = creador; }

	void setEstado(Estado^ estado) { this->estado = estado; }

	void setTecnico(Usuario^ tecnico) { this->tecnico = tecnico; }
};