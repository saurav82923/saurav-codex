class Student{
    String name;
    Student(Student s){
        this.name=s.name;
    }
    Student(){
        
    }
    public  void print(){
        System.out.println( name);
    }

}

public class classandobj {
    public static void main(String args[]){
        Student s=new Student();
        s.name="saurav";
        s.print();
        Student ss=new Student(s);
      
        ss.print();

    }
}
