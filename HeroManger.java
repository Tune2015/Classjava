import java.util.ArrayList;
import java.util.Arrays;

public class HeroManager {
    private ArrayList<Hero> heroes;

    public HeroManager() {
        heroes = new ArrayList<>();
    }

    // Add Hero
    public void addHero(Hero hero) {
        heroes.add(hero);
    }

    // Remove Hero
    public void removeHero(String name) {
        heroes.removeIf(hero -> hero.getName().equalsIgnoreCase(name));
    }

    // Bubble Sort
    public void bubbleSortHeroesByPower() {
        int n = heroes.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (heroes.get(j).getPowerLevel() > heroes.get(j + 1).getPowerLevel()) {
                    Hero temp = heroes.get(j);
                    heroes.set(j, heroes.get(j + 1));
                    heroes.set(j + 1, temp);
                }
            }
        }
    }

    // Insertion Sort
    public void insertionSortHeroesByPower() {
        int n = heroes.size();
        for (int i = 1; i < n; ++i) {
            Hero key = heroes.get(i);
            int j = i - 1;

            while (j >= 0 && heroes.get(j).getPowerLevel() > key.getPowerLevel()) {
                heroes.set(j + 1, heroes.get(j));
                j = j - 1;
            }
            heroes.set(j + 1, key);
        }
    }

    // Display Heroes as a 2D Array
    public void displayHeroesAs2DArray() {
        String[][] heroArray = new String[heroes.size()][3];
        for (int i = 0; i < heroes.size(); i++) {
            heroArray[i][0] = heroes.get(i).getName();
            heroArray[i][1] = String.valueOf(heroes.get(i).getPowerLevel());
            heroArray[i][2] = heroes.get(i).getAffiliation().toString();
        }
        System.out.println(Arrays.deepToString(heroArray));
    }

    // Display Heroes
    public void displayHeroes() {
        for (Hero hero : heroes) {
            System.out.println(hero);
        }
    }
}
