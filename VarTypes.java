public class VarTypes{

    public int a = 10; //instance variable 
    public static int b = 23; //static variable

    public String toString(){
        return "How you doing?";
    }

    public static void main(String[] args) {
        
        int c = 22;
        VarTypes ref = new VarTypes();

        System.out.println("\nInstance/Global Variable :" + ref.a);
        System.out.println("Class/Static Variable :"+ b);
        System.out.println("Local Variable :" + c);
        System.out.println(new VarTypes()); //when overridden toString method print the returned values
    }
}