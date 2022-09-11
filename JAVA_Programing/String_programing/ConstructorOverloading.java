class Student {
    int id;
    String name;
    int age;

    Student(int i, String n) {
        id = i;
        name = n;

    }

    Student(int i, String n, int a) {
        id = i;
        name = n;
        age = a;
    }

    void display() {
        System.out.println(id + "  " + name + "   " + age);
    }
}

public class ConstructorOverloading {
    public static void main(String arg[]){
        Student s1=new Student(1903044,"Supratik");
        Student s2=new Student(190346, "Yashveen", 21);

        s1.display();
        s2.display();;

    }
}
