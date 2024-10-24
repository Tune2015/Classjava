public class Author {
    private String name;
    private String email;
    private String nationality;

    public Author(String name, String email, String nationality) {
        this.name = name;
        this.email = email;
        this.nationality = nationality;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }

    public String getNationality() {
        return nationality;
    }

    @Override
    public String toString() {
        return "Author: " + name + ", Email: " + email + ", Nationality: " + nationality;
    }
}