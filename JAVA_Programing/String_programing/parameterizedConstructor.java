

class Student{
    int id;
    String Name;

    Student(int id1,String number){
        id=id1;
        Name=number;
    }
    void display(){
        System.out.println(id+" "+Name);
    }
}
public class parameterizedConstructor {
    public static void main(String args[]){
        Student st1=new Student(11,"Supratik");
        Student st2=new Student(12,"Yashveen");

        st1.display();
        st2.display();

    }
}
