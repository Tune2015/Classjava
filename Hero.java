public class Hero {
    private String name;
    private int powerLevel;
    private Affiliation affiliation;

    // Constructor to initialize each hero's attributes
    public Hero(String name, int powerLevel, Affiliation affiliation) {
        this.name = name;
        this.powerLevel = powerLevel;
        this.affiliation = affiliation;
    }

    // Getter methods for each attribute
    public String getName() {
        return name;
    }

    public int getPowerLevel() {
        return powerLevel;
    }

    public Affiliation getAffiliation() {
        return affiliation;
    }

    // toString method that returns a string representation of the hero
    @Override
    public String toString() {
        return "Hero{name='" + name + "', powerLevel=" + powerLevel + ", affiliation=" + affiliation + '}';
    }
}
public enum Affiliation {
    AVENGERS,
    JUSTICE_LEAGUE,
    X_MEN,
    FANTASTIC_FOUR
}
