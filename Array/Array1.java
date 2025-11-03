class Array1
{
    public static void main (String args[])
    {
        int arr[]={2,32,5,26,3};
        int size=arr.length;
        //System.out.println(size);
        int Largest=50;
        for(int i=0;i<size;i++)
        {
            if(arr[i]<Largest)
            {
                Largest=arr[i];
            }
        }
        System.out.println("Smallest Number is ::" +Largest);
    }
}