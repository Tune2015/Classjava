public class Stringbuilder{
    public static void main(String[] args) {
        
        StringBuilder sb = new StringBuilder("StringBuilder Lab");
        
        
        sb.append(" - Learning Java");
        
        
        int insertPosition = sb.indexOf("Lab") + "Lab".length();
        sb.insert(insertPosition, " is fun");
        
        
        int start = sb.indexOf("Learning");
        int end = start + "Learning".length();
        sb.delete(start, end);
        
        
        sb.reverse();
        System.out.println(sb.toString());
    }
}