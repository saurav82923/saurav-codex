class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> list=new ArrayList<>();
        Map<Integer,Integer> m=new HashMap<>();
        for(int i: nums){
            m.put(i,m.getOrDefault(i,0)+1);
        }
        for(Map.Entry<Integer,Integer> i: m.entrySet()){
            if(i.getValue() == 2){
                list.add(i.getKey());
            }
        }
        return list;
    }
}