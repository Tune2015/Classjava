public class Stringbuffer {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("Multithreading Lab");

        // append()
        sb.append(" - Learning Java");
        System.out.println("After append: " + sb);

        // insert()
        sb.insert(sb.indexOf("Lab") + 3, " is fun");
        System.out.println("After insert: " + sb);

        // delete()
        int start = sb.indexOf("Learning");
        int end = start + "Learning".length();
        sb.delete(start, end);
        System.out.println("After delete: " + sb);

        // reverse()
        sb.reverse();
        System.out.println("After reverse: " + sb);
    }
}