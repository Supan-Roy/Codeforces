import java.util.*;

public class Performances {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int[] points=new int[n];
        
        for(int i=0;i<n;i++){
            points[i]=scanner.nextInt();
    }
        int amazing=0;
        int best=points[0];
        int worst=points[0];
        
        for(int i=0;i<n;i++){
            if(points[i]>best){
                amazing++;
                best=points[i];
            }
            else if(points[i]<worst){
                amazing++;
                worst=points[i];
            }
        }
        System.out.println(amazing);
        scanner.close();
    }
}
