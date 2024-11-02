#pragma once
#include "pch.h"

using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

public ref class Connection {
private:
	MySqlConnection^ conn;
	String^ connectionString = "datasource=localhost;port=3306;username=android_user;password=asdASD123;database=control_tickets;";

public:
	Connection() {
		this->conn = gcnew MySqlConnection(this->connectionString);
	}

	MySqlConnection^ getConnection() {
		return this->conn;
	}

    void CloseResources(MySqlConnection^ conn, MySqlDataReader^ reader) {
        if (reader != nullptr) {
            reader->Close(); // Close the reader if it was opened
        }
        if (conn != nullptr && conn->State == ConnectionState::Open) {
            conn->Close(); // Ensure the connection is closed
        }
    }

	void OpenConnection() {
		if (this->conn->State == System::Data::ConnectionState::Closed) {
			this->conn->Open();
		}
	}
};