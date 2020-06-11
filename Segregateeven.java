import java.io.*; 
class Segregateeven 
{ 
    static void segregate(int arr[]) 
    {
        int left = 0, right = arr.length - 1; 
        while (left < right) 
        { 
            while (arr[left]%2 == 0 && left < right) 
                left++; 
            while (arr[right]%2 == 1 && left < right) 
                right--; 
            if (left < right) 
            { 
                int temp = arr[left]; 
                arr[left] = arr[right]; 
                arr[right] = temp; 
                left++; 
                right--; 
            } 
        } 
    } 
    public static void main (String[] args) 
    {
        int n;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the array size:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the array elements:");
        for(int i=0;i<n;i++)
          a[i]=s.nextInt();
        segregate(arr); 
        System.out.print("Array after segregation "); 
        for (int i = 0; i < arr.length; i++) 
            System.out.print(arr[i]+" "); 
    } 
} 
