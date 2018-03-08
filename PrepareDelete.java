package com.prepared.mysql;

import java.sql.*;
import com.dbconn.*;

public class PrepareDelete {

	public static void main(String[] args) {

		Connection con = MySQLConn.getConnection();
		
		try {
			
			PreparedStatement stmt = con.prepareStatement("DELETE FROM STUDENT WHERE ROLLNO=?");
			stmt.setInt(1, 9);
		
			int res = stmt.executeUpdate();
			System.out.println(res+" Rows deleted.....");
		}
		catch(SQLException e) {
			
			System.out.println(e);
		}
	}

}
