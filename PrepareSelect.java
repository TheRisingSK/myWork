package com.prepared.oracle;

import java.sql.*;
import com.dbconn.*;

public class PrepareSelect {

	public static void main(String[] args) {
		
		Connection con = OracleConn.getConnection();
		
		try {
			
			
			PreparedStatement stmt = con.prepareStatement("SELECT * FROM STUDENTS");
			ResultSet rs = stmt.executeQuery();
			
			System.out.println("FirstName\tLastName");
			System.out.println("---------------------------");
			while(rs.next()) {
				System.out.println(rs.getString(1)+"\t\t"+rs.getString(2));
			}
			
			rs.close();
			stmt.close();
			
		}
		catch(SQLException e) {
			System.out.println(e);
		}
	}
	
	
}
