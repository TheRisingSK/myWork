package com.prepared.mysql;

import java.sql.*;

public class PrepareInsert {

	public static void main(String[] args) {

		try {
			
			Class.forName("com.mysql.jdbc.Driver");
			
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/sakila?useSSL=false","root","root");
			
			PreparedStatement stmt = con.prepareStatement("INSERT INTO STUDENT(rollno,name,contact) VALUES(?,?,?)");
			stmt.setInt(1, 10);
			stmt.setString(2, "sunil bro");
			stmt.setString(3, "9866559887");
			
			stmt.execute();
			
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
