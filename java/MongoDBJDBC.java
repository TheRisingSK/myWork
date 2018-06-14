//before tyring this project make sure you created maven project
package com.santosh.demo;

import java.net.UnknownHostException;
import java.util.Date;

import com.mongodb.BasicDBObject;
import com.mongodb.DB;
import com.mongodb.DBCollection;
import com.mongodb.DBCursor;
import com.mongodb.MongoClient;
import com.mongodb.MongoException;

public class MongoTest {

	public static void main(String[] args) {
		
		try {
			//connect to mongo db
			MongoClient mongo = new MongoClient("localhost",27017);
			
			//get the database
			DB db = mongo.getDB("local");
			
			//get table collection from local
			DBCollection table = db.getCollection("user");
			
			//insert
			BasicDBObject document = new BasicDBObject();
			document.put("name", "sunil");
			document.put("age", 25);
			document.put("createdDate", new Date());
			table.insert(document);
			
			BasicDBObject doc2 = new BasicDBObject();
			doc2.put("username", "rutuja");
			doc2.put("password", "admin2");
			table.insert(doc2);
			
			
			//find and display record
			BasicDBObject searchQuery = new BasicDBObject();
			searchQuery.put("name","sunil");
			
			DBCursor cursor = table.find(searchQuery);
			while (cursor.hasNext()) {
				System.out.println(cursor.next());				
			}
			
			
			//update the records
			BasicDBObject query = new BasicDBObject();
			query.put("name", "sunil");
			
			BasicDBObject newDoc = new BasicDBObject();
			newDoc.put("name","updated sunil");
			
			BasicDBObject updateObj = new BasicDBObject();
			updateObj.put("$set", newDoc);
			
			table.update(query, updateObj);
			
			//find and display
			BasicDBObject searchq= new BasicDBObject().append("name", "sunil updated");
			
			DBCursor cursor2= table.find(searchq);
			
			while (cursor2.hasNext()) {
				//displaying records
				System.out.println(cursor2.next());
			}		
			
			//done
			System.out.println("done all operation!!");
			
		}
		catch(UnknownHostException e) {
			System.out.println(e);
		}
		catch(MongoException e) {
			System.out.println(e);
		}
	}

}
