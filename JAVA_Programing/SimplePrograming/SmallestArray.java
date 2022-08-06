package JAVA_Programing.SimplePrograming;
// import java.util.*;
public class SmallestArray {
    public static void main(String args[]){
        int arr1[]={2,5,1,3,0};
        System.out.println("The smallest value in the array"+Smallestelement(arr1));

        int arr2[]={8,9,5,10,7};
        System.out.println("The smallest value in the array"+Smallestelement(arr2));

    }
    static int Smallestelement(int arr[]){
        int min=arr[0];
        for(int i=0;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;

    }
}
