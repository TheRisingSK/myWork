public class VarRules{

    public String _name = "Santosh";  //starting with underscode
    public int $rate = 65; // starting with dollar
    public String _Name = "Sunil"; // same variable name with diffrent case sensitive
    public static int MAX_VALUE = 32; // static variable name should be capital

    public static void main(String[] args) {
    
        VarRules ref = new VarRules();

        System.out.println(ref._name);
        System.out.println(ref._Name);
        System.out.println(ref.$rate);
        System.out.println(MAX_VALUE);
    }
}