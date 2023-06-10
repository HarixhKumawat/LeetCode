class medium{
    public static int palindrom(String str, int start, int end) {
        if (start == end) {
            return 1;
        }
        if (start > end) {
            return 0;
        }
        if (start == end - 1) {
            return 1;
        }
        
        if (str.charAt(start) == str.charAt(end)) {
            System.out.print("+1");
            return 2 + palindrom(str, start+1, end-1);
        } else {
            return Math.max(palindrom(str, start+1, end), palindrom(str, start, end-1));
        }
    }
    
    
    public static void main(String[] args) {
        String s = "aslodjflasjdflkjasdfglashjdflasjdlfj";
        int i = palindrom(s, 0, s.length()-1);
        System.out.println("");
        System.out.println("**************************");
        System.out.println(i);
    }
}