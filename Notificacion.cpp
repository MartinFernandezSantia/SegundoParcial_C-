#pragma once
#include "pch.h"

#include "Usuario.cpp"

using namespace System;

public ref class Notificacion {
private:
	int id;
	String^ mensaje;
	bool visto;
	Usuario^ remitente;

public:
	// Contructores
	Notificacion(){}

	Notificacion(int id, String^ mensaje, bool visto, Usuario^ remitente) {
		this->id = id;
		this->mensaje = mensaje;
		this->visto = visto;
		this->remitente = remitente;
	}

	Notificacion(String^ mensaje, Usuario^ remitente) {
		this->mensaje = mensaje;
		this->remitente = remitente;
	}

	// Getters
	int getId() { return this->id; }

	String^ getMensaje() { return this->mensaje; }

	bool getVisto() { return this->visto; }

	Usuario^ getRemitente() { return this->remitente; }

	// Setters
	void setId(int id) { this->id = id; }

	void setMensaje(String^ mensaje) { this->mensaje = mensaje; }

	void setVisto(bool visto) { this->visto = visto; }

	void setRemitente(Usuario^ remitente) { this->remitente = remitente; }
};