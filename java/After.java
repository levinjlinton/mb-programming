public class After {
    public static int getMax(int a, int b) {
        if (a == b) {
            System.out.println("These values are equal.");
            return a;
        }
        return (a > b) ? a : b;
    }
    
    public static void main(String[] args) {
        System.out.println(getMax(4, 4));
    }
}

//I made the following changes:
//1. I added a print statement to the if block to print a message if the values are equal.
//2. I changed the if-else block to a ternary operator to make the code more concise.