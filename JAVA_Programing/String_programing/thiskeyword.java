class Student{  
    int rollo;  
    String name;  
    float fee;  
    Student(int roll_no,String name_k,float fee_f){  
    roll_no=rollno;  
    name_k=name;  
    fee_f=fee;  
    }  
    void display(){System.out.println(rollno+" "+name+" "+fee);}  
    }  
    class TestThis1{  
    public static void main(String args[]){  
    Student s1=new Student(111,"ankit",5000f);  
    Student s2=new Student(112,"sumit",6000f);  
    s1.display();  
    s2.display();  
 }
}  