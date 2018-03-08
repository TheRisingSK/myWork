package com.prepared.mysql;

import java.sql.*;
import com.dbconn.*;

public class PrepareSelect {

	public static Connection con = MySQLConn.getConnection();
	public static void main(String[] args) {

		try {
			
			
			PreparedStatement stmt = con.prepareStatement("SELECT * FROM STUDENT");
			ResultSet rs = stmt.executeQuery();
			
			System.out.println("Rollno\tName\t\tContact");
			System.out.println("--------------------------------");
			while(rs.next()) {
				System.out.println(rs.getInt(1)+"\t"+rs.getString(2)+"\t"+rs.getLong(3));
			}
			
			rs.close();
			stmt.close();
			
		}
		catch(SQLException e) {
			System.out.println(e);
		}
	}

}
