package org.santosh.demo;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class XmlServlet extends HttpServlet {

	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException{
		
			response.setContentType("text/html");
			PrintWriter out = response.getWriter();			
			out.println("Hello from GET :");			
			String username = request.getParameter("userName");
			String fullname = request.getParameter("fullName");
			out.println("Username : " + username + " Fullname : " + fullname);
			
			String prof = request.getParameter("prof");
			out.println("Professsion : "+prof);
			
			String country = request.getParameter("country");
			out.println("Country : "+ country);
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response)throws ServletException, IOException {
		
			response.setContentType("text/html");
			PrintWriter out = response.getWriter();			
			out.println("Hello from POST :");			
			String username = request.getParameter("userName");
			String fullname = request.getParameter("fullName");
			out.println("Username : " + username + " Fullname : " + fullname);
			
			String prof = request.getParameter("prof");
			out.println("Professsion : "+prof);
			
			String country = request.getParameter("country");
			out.println("Country : "+ country);
	}
}
