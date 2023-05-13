package inheritence;
class Triangle {
    float length;
    float height;
    public display(){
        System.out.println((1/2)*length*height);
    }
}
class Striangle extends Triangle{

}
public class first{
    public static void main(String[] args){
       Striangle t1 = new Striangle();
       t1.length=5.0;
       t1.height=2.0;
       t1.display(); 
    }
}