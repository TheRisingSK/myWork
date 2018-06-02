package com.prepared.oracle;

import java.sql.*;

public class PrepareInsert {

	public static void main(String[] args) {

		try {
			
			Class.forName("oracle.jdbc.driver.OracleDriver");
			
			Connection con = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:XE","hr","hr");
			
			PreparedStatement stmt = con.prepareStatement("INSERT INTO STUDENTS VALUES(?,?)");
			stmt.setString(1, "amar");
			stmt.setString(2, "shaikh");
			
			int res = stmt.executeUpdate();
			if(res>=0) {
				System.out.println(res+" record inserted");
			}
			else {
				System.out.println("record not inserted");
			}
			stmt.close();
			con.close();
			
		}
		catch(ClassNotFoundException e) {
			System.out.println(e);
		}
		catch(SQLException e) {
			System.out.println(e);
		}
	}

}
