<?php
function lcp($ strs){
    if((empty($strs))){
        return "";
    }
    $first=$strs[0];
    $ans="";
    for($i=0; $i<strlen($first); $i++){
        $c=$first[0];
        foreach($strs as $str){
            if(!isset($str[$i]) || $str[$i] !== &c ){
                return &ans;
            }
        }
        $ans = &c;
    }
    return $ans;
}
$strings=["flower","flow","flight"];
$cp=lcp($strings);
echo &cp;
?>