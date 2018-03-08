package com.prepared.mysql;

import java.sql.*;
import com.dbconn.*;

public class PrepareUpdate {

	public static void main(String[] args) {

		Connection con = MySQLConn.getConnection();
		
		try {
			PreparedStatement stmt = con.prepareStatement("UPDATE STUDENT SET NAME=? WHERE ROLLNO=?");
			stmt.setString(1, "sunil bhau");
			stmt.setInt(2, 6);
			
			int res = stmt.executeUpdate();
			
			System.out.println(res+" rows affected...");
		}
		catch(SQLException e) {
			System.out.println(e);
		}
	}

}
