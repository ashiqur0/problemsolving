public class a {

  static String n2 (int n) {
    int[] hexNum = new int[100];
    int i = 0;
    while (n != 0) {
        hexNum[i] = n % 16;
        n = n / 16;
        i++;
    }
    String s = "";
    for (int j = i - 1; j >= 0; j--) {
        if (hexNum[j] > 9) s += (char)(55 + hexNum[j]);
        else s += hexNum[j];
    }
    return s;
  }
  
  static String n3 (int n) {
    int[] hexNum = new int[100];
    int i = 0;
    while (n != 0) {
        hexNum[i] = n % 36;
        n = n / 36;
        i++;
    }
    String s = "";
    for (int j = i - 1; j >= 0; j--) {
        if (hexNum[j] > 9) s += (char)(55 + hexNum[j]);
        else s += hexNum[j];
    }
    return s;
  }
  public static void main(String[] args) {
      // int n = 2545;
      int n = 13;
      // System.out.println(n2(n*n) + n3(n*n*n));
      System.out.println(n2(n*n)+n3(n*n*n));
  }
}