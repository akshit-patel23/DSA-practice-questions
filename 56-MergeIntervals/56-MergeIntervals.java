// Last updated: 7/27/2026, 3:02:30 PM
class Solution {
    int currend=-1;
    int currstart=-1;
    int start=-1;
    int end=-1;
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->a[0]-b[0]);
        List<int[]> result = new ArrayList<>();
        for(int i=0;i<intervals.length;i++){
            currstart= intervals[i][0];
            currend=intervals[i][1];

            //first time
          if(i==0){
            start= currstart;
            end=currend;
          }

          if(currstart<=end){
            end=Math.max(currend,end);
          }
          else{
            result.add(new int[]{start,end});
            start= currstart;
            end=currend;
          }
        }
        result.add(new int[]{start,end});
        return result.toArray(new int[result.size()][]);
    }
}