package com.prepared.oracle;

import java.sql.*;
import com.dbconn.*;

public class PrepareDelete {

	public static void main(String[] args) {

		Connection con = OracleConn.getConnection();
		
		try {
			PreparedStatement stmt = con.prepareStatement("DELETE FROM STUDENTS WHERE FNAME=?");
			stmt.setString(1, "santu");
			
			int res = stmt.executeUpdate();
			System.out.println(res+" record deleted....");
		}
		catch(SQLException e) {
			
			System.out.println(e);
		}
	}

}
