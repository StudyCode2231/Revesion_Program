package JAVA_Programing.SimplePrograming;

public class sumArray {
     public static void main(String[] args) {
        int n=5;
        int arr[]={1,2,3,4,5};
        int arr_sum=0;
        for(int i=0;i<n;i++){
            arr_sum+=arr[i];
        }
        System.out.println("The sum of the elements of the array is "+arr_sum);

        
    }
}
