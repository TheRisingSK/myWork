package com.prepared.oracle;

import java.sql.*;
import com.dbconn.*;

public class PrepareUpdate {

	public static void main(String[] args) {

		Connection con = OracleConn.getConnection();
		
		try {
			
			PreparedStatement stmt = con.prepareStatement("UPDATE STUDENTS SET FNAME=? WHERE LNAME=?");
			stmt.setString(1, "rush");
			stmt.setString(2, "shenkar");
			int res = stmt.executeUpdate();
			System.out.println(res + " Record updated....");
		}
		catch(SQLException e) {
			System.out.println(e);
		}
	}

}
