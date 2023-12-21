// ConectarMYSQL CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <mysql.h>
#include <string> 

int queryS;

int main()
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "1234", "cpp", 3306, nullptr, 0);
    if (conn) {
        std::cout << "Connection complete.";
        std::string user;
        std::string password;
        std::cout << "\nEnter the user: ";
        std::cin >> user;
        std::cout << "Enter the password: ";
        std::cin >> password;
        std::string insert = "insert into login (user, password) values ('" + user + "', '" +password+ "')";
        const char* i = insert.c_str();
        queryS = mysql_query(conn, i);

        if (!queryS) {
            std::cout << "Insert succesful..." << std::endl;
        }
        else {
            std::cout << "Insert error..." << std::endl;
        }
        std::string query = "select * from login";
        const char* c = query.c_str();
        queryS = mysql_query(conn, c);
        if (!queryS) {
            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res)) {
                std::cout << row[0] << "," << row[1] << "," << row[2] << std:: endl;
            }
        }
        else {
            std::cout << "Query error..." << std::endl;
        }
    }
    else {
        std::cout << "Connection failed..." << std::endl;
    }
}

  