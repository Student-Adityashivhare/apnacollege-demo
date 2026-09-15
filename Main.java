class Xyz{
   private String name;
    private int age;

    public void setname(String name){
        this.name = name;
    }
    public String getname(){
        return name;
    }

    public void setage(int age){
        this.age = age;
    }
    public int getage(){
        return age;
    }
}

public class Main{
    public static void main(String[] args){
        Xyz obj = new Xyz();
        obj.setname("Aditya");
        obj.setage(22);
        System.out.println("name:" + obj.getname());
        System.out.println("age:" + obj.getage());
    }

}
