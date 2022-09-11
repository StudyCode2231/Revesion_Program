class Student{
    int id;
    String name;
    void display(){
        System.out.println(id+""+name);
    }
};


public class DefaultConstructor {
    public static void main(String args[]){
        Student st=new Student();
        Student st2=new Student();

        st.display();
        st2.display();
    }
}
