// Last updated: 7/27/2026, 3:01:18 PM
class Solution {
    public long maxWeight(int[] pizzas) {
        Arrays.sort(pizzas);
        int totaldays=pizzas.length/4;
        int index=pizzas.length-1;
        long weight=0;

        for(int c:pizzas){
            // System.out.println(c);
        }
        
        for (int i=1;i<=totaldays;i=i+2){
            weight+=pizzas[index];
          
            index--; 
        }
        index--;
        for(int j=2;j<=totaldays;j=j+2){
            weight+=pizzas[index];
            index=index-2;
        }
        return weight;
    }
}