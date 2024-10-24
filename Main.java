public class Main {
    public static void main(String[] args) {
        Author author = new Author("J.K. Rowling", "jk.rowling@example.com", "British");
        Book book = new Book("Harry Potter and the Philosopher's Stone", 19.99, author);

        System.out.println(book.toString());
    }
}