public class StringLab {
    public static void main(String[] args) {
        String str = " Welcome to the Java String Lab! ";

        
        System.out.println("Length of the string: " + str.length());

        
        System.out.println("Character at index 7: " + str.charAt(7));

        
        System.out.println("Extracted word: " + str.substring(15, 19));

        
        System.out.println("Uppercase: " + str.toUpperCase());
        System.out.println("Lowercase: " + str.toLowerCase());

        
        System.out.println("Index of 'Java': " + str.indexOf("Java"));

        
        System.out.println("Contains 'Lab': " + str.contains("Lab"));

        
        System.out.println("Replaced string: " + str.replace("Java", "Java Programming"));

        
        String[] words = str.split(" ");
        System.out.println("Split words:");
        for (String word : words) {
            System.out.println(word);
        }

        
        System.out.println("Trimmed string: '" + str.trim() + "'");

        
        String compareStr = "java string lab!";
        System.out.println("Equals: " + str.equals(compareStr));
        System.out.println("Equals ignore case: " + str.trim().equalsIgnoreCase(compareStr));
    }
}